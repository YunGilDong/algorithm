//#include <stdio.h>
//
//#define N    3      // �ʿ��Ѹ�ŭ����
//
//int GetGCD(int u, int v);
//
//int main()
//{
//	int arr[N];
//	int gcd;
//	int lcm;
//	int i;
//
//	while (1)
//	{
//		// �迭�Է�
//		printf("%d �����������Է��ϼ���: ", N);
//		for (i = 0; i < N; ++i)
//			scanf("%d", &arr[i]);
//
//		// �Է°��˻�
//		for (i = 0; i < N; ++i)
//			if (arr[i] <= 0)
//				continue;
//
//		break;
//	}
//
//	// ��üGCD �����Ѵ�.
//	// A = aG, B = bG, C = cG, ..., G = GCD, a, b, ... �¼��μҶ���Ҷ�
//	// GCD(A, B, C) = GCD(GCD(A,B), C)
//	// ��¼������̿��Ѵ�
//	gcd = GetGCD(arr[0], arr[1]);
//	for (i = 2; i < N; ++i)
//		gcd = GetGCD(gcd, arr[i]);
//
//	// LCM �����Ѵ�
//	// A = aG, B = bG, C = cG, ...
//	// ����Ҷ�LCM = abcG = A/G * B/G * C/G * G ��¼������̿��Ѵ�
//	lcm = 1;
//	for (i = 0; i < N; ++i)
//		lcm *= arr[i] / gcd;
//	lcm *= gcd;
//
//	printf("GCD = %d\n", gcd);
//	printf("LCM = %d\n", lcm);
//
//	return 0;
//}
//
//int GetGCD(int u, int v)
//{
//	int t;
//	while (v) // v���̸� u�� ��ȯ, �ƴϸ�loop
//	{
//		t = u % v;
//		u = v;
//		v = t;
//	}
//
//	return u;
//}