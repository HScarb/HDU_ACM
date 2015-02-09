// ---- �Լӷ���,���Է��ֶ�ʱ����ɢ�������в�ͨ,��ΪҪ��ﵽ����,��ض���ʱ.
// ---- ��Ȼ��ɢ��ͳ�Ʋ���,�Ǿ͸�Ϊͳ��ʱ���. ����,ָ��֮��ļн��ǹ���ʱ���֡�������Ժ���,
// ---- ���ʱ����ȷ��,��ô���Ǿ͵õ�����������Բ���ʽ��,��⼯�ض���һЩ����Ľ���.
// ---- ���״�����Ľ�����ͳ�Ƴ�������ʱ�⡱�ĳ���. ��������:
// ---- �赱ǰ��ʱ��Ϊ H:M:S, ���� 0 <= H < 12, 0 <= M < 60, 0 <= S < 60, H,M��Ϊ����, SΪʵ��
// ---- ����ʱ�롢���롢���������ʱ�� 0:0:0 ��ת�Ƿֱ�Ϊ
// ---- A(H) = 30H + M/2 + S/120;
// ---- A(M) = 6M + S/10;
// ---- A(S) = 6S;
// ---- ����Ŀ�е��ٽ�н�Ϊ D,�򡰿���ʱ�⡱��ͬʱ�������²���ʽ�Ľ�:
// ---- D <= | A(H) - A(M) | <= 360-D; (1)
// ---- D <= | A(H) - A(S) | <= 360-D; (2)
// ---- D <= | A(M) - A(S) | <= 360-D; (3)
// ---- �����ʽ�ľ���ֵ�е���ʽΪ bS - a,(a,bΪ����,b>0) �ʽ����ʽΪ
// ---- [ (a+D)/b, (a+360-D)/b) ] �� [ (a+D-360)/b, (a-D)/b ], ������������Ĳ���.
// ---- ����ʽ(i)�õ��Ľ⼯Ϊ Si1 �� Si2, ��ô������ʱ�⡱��ʱ����ȷ��������£�����Ľ⼯Ϊ
// ---- [0,60] �� (S11 �� S12) �� (S21 �� S22) �� (S31 �� S32)
// ---- ����ļ������׻��� S1 �� S2 �� S3 �� S4 �� S5 �� S6 �� S7 �� S8 ����ʽ,���� S1,S2,...��Ϊ������.
// ---- ������Ĳ����ܳ���û������,������ܳ��Ⱦ�����ʱ����ȷ���ġ�����ʱ�⡱�ĳ���.
#include <iostream>
#include <iomanip>
using namespace std;
// ����ṹ
struct Segment{ double a, b; };
// ����������������ǵĽ������䣩
Segment operator(Segment S1, Segment S2)
{
	Segment seg;
	seg.a = S1.a>S2.a ? S1.a : S2.a;
	seg.b = S1.b<S2.b ? S1.b : S2.b;
	if (seg.a >= seg.b)
		seg.a = seg.b = 0.0;
	return seg;
}
// ������ʱ�⡱�ٽ�Ƕ�
double D;
// �� D <= bS - a <= D1 �н������
Segment makeSeg1(double, double);
// �� D <= a - bS <= D1 �н������
Segment makeSeg2(double, double);
//--------------------------- ������ ---------------------------//
int main()
{
	while (cin >> D, D != -1)
	{
		double totLen = 0.0; // ������ʱ�⡱�ܳ���
		// ö��ʱ����
		for (int H = 0; H < 12; H++)
		{
			for (int M = 0; M < 60; M++)
			{
				Segment S[3][2];
				// ��û���������
				double a, b;
				a = 30.0 * H - 5.5 * M, b = 11.0 / 120;
				S[0][0] = makeSeg1(a, b), S[0][1] = makeSeg2(a, b);
				a = 30.0 * H + 0.5 * M, b = 719.0 / 120;
				S[1][0] = makeSeg1(a, b), S[1][1] = makeSeg2(a, b);
				a = 6.0 * M, b = 5.9;
				S[2][0] = makeSeg1(a, b), S[2][1] = makeSeg2(a, b);
				// ���⼯ת��Ϊ����Ĳ������ۼơ�����ʱ�⡱�ĳ���
				for (int i = 0; i < 2; i++)
				for (int j = 0; j < 2; j++)
				for (int k = 0; k < 2; k++)
				{
					Segment TS = S[0][i] * S[1][j] * S[2][k];
					totLen += TS.b - TS.a;
				}
			}
		}
		// ���������ʱ�⡱�ı���
		cout << setprecision(3) << fixed << totLen / 432.0 << endl;
	}
	return 0;
}
//---------------------------------------------------------------//
// �� D <= bS - a <= D1 �н������
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
// �� D <= a - bS <= D1 �н������
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