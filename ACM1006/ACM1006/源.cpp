// ---- 稍加分析,可以发现对时间离散化计数行不通,因为要想达到精度,则必定超时.
// ---- 既然离散地统计不行,那就改为统计时间段. 试想,指针之间的夹角是关于时、分、秒的线性函数,
// ---- 如果时、分确定,那么我们就得到关于秒的线性不等式组,其解集必定是一些区间的交或并.
// ---- 容易从区间的交或并中统计出“快乐时光”的长度. 具体如下:
// ---- 设当前的时间为 H:M:S, 其中 0 <= H < 12, 0 <= M < 60, 0 <= S < 60, H,M皆为整数, S为实数
// ---- 于是时针、分针、秒针相对于时刻 0:0:0 的转角分别为
// ---- A(H) = 30H + M/2 + S/120;
// ---- A(M) = 6M + S/10;
// ---- A(S) = 6S;
// ---- 设题目中的临界夹角为 D,则“快乐时光”是同时满足以下不等式的解:
// ---- D <= | A(H) - A(M) | <= 360-D; (1)
// ---- D <= | A(H) - A(S) | <= 360-D; (2)
// ---- D <= | A(M) - A(S) | <= 360-D; (3)
// ---- 上面各式的绝对值中的形式为 bS - a,(a,b为常数,b>0) 故解的形式为
// ---- [ (a+D)/b, (a+360-D)/b) ] 并 [ (a+D-360)/b, (a-D)/b ], 即两个闭区间的并集.
// ---- 设由式(i)得到的解集为 Si1 并 Si2, 那么“快乐时光”在时、分确定的情况下，其秒的解集为
// ---- [0,60] 交 (S11 并 S12) 交 (S21 并 S22) 交 (S31 并 S32)
// ---- 上面的集合容易化成 S1 并 S2 并 S3 并 S4 并 S5 并 S6 并 S7 并 S8 的形式,其中 S1,S2,...皆为闭区间.
// ---- 求区间的并的总长度没有困难,而这个总长度就是由时、分确定的“快乐时光”的长度.
#include <iostream>
#include <iomanip>
using namespace std;
// 区间结构
struct Segment{ double a, b; };
// 由两个区间求出它们的交（区间）
Segment operator(Segment S1, Segment S2)
{
	Segment seg;
	seg.a = S1.a>S2.a ? S1.a : S2.a;
	seg.b = S1.b<S2.b ? S1.b : S2.b;
	if (seg.a >= seg.b)
		seg.a = seg.b = 0.0;
	return seg;
}
// “快乐时光”临界角度
double D;
// 从 D <= bS - a <= D1 中解出区间
Segment makeSeg1(double, double);
// 从 D <= a - bS <= D1 中解出区间
Segment makeSeg2(double, double);
//--------------------------- 主函数 ---------------------------//
int main()
{
	while (cin >> D, D != -1)
	{
		double totLen = 0.0; // “快乐时光”总长度
		// 枚举时、分
		for (int H = 0; H < 12; H++)
		{
			for (int M = 0; M < 60; M++)
			{
				Segment S[3][2];
				// 获得基本解区间
				double a, b;
				a = 30.0 * H - 5.5 * M, b = 11.0 / 120;
				S[0][0] = makeSeg1(a, b), S[0][1] = makeSeg2(a, b);
				a = 30.0 * H + 0.5 * M, b = 719.0 / 120;
				S[1][0] = makeSeg1(a, b), S[1][1] = makeSeg2(a, b);
				a = 6.0 * M, b = 5.9;
				S[2][0] = makeSeg1(a, b), S[2][1] = makeSeg2(a, b);
				// 将解集转化为区间的并，并累计“快乐时光”的长度
				for (int i = 0; i < 2; i++)
				for (int j = 0; j < 2; j++)
				for (int k = 0; k < 2; k++)
				{
					Segment TS = S[0][i] * S[1][j] * S[2][k];
					totLen += TS.b - TS.a;
				}
			}
		}
		// 输出“快乐时光”的比例
		cout << setprecision(3) << fixed << totLen / 432.0 << endl;
	}
	return 0;
}
//---------------------------------------------------------------//
// 从 D <= bS - a <= D1 中解出区间
Segment makeSeg1(double a, double b)
{
	Segment seg;
	seg.a = (D + a) / b, seg.b = (360.0 - D + a) / b;
	if (seg.a < 0.0)
		seg.a = 0.0;
	if (seg.b > 60.0)
		seg.b = 60.0;
	if (seg.a >= seg.b)
		seg.a = seg.b = 0.0;
	return seg;
}
// 从 D <= a - bS <= D1 中解出区间
Segment makeSeg2(double a, double b)
{
	Segment seg;
	seg.a = (a + D - 360.0) / b, seg.b = (a - D) / b;
	if (seg.a < 0.0)
		seg.a = 0.0;
	if (seg.b > 60.0)
		seg.b = 60.0;
	if (seg.a >= seg.b)
		seg.a = seg.b = 0.0;
	return seg;
}