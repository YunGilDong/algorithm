//#include <stdio.h>
//
//#define N    3      // 필요한만큼조정
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
//		// 배열입력
//		printf("%d 개의정수를입력하세요: ", N);
//		for (i = 0; i < N; ++i)
//			scanf("%d", &arr[i]);
//
//		// 입력값검사
//		for (i = 0; i < N; ++i)
//			if (arr[i] <= 0)
//				continue;
//
//		break;
//	}
//
//	// 전체GCD 를구한다.
//	// A = aG, B = bG, C = cG, ..., G = GCD, a, b, ... 는서로소라고할때
//	// GCD(A, B, C) = GCD(GCD(A,B), C)
//	// 라는성질을이용한다
//	gcd = GetGCD(arr[0], arr[1]);
//	for (i = 2; i < N; ++i)
//		gcd = GetGCD(gcd, arr[i]);
//
//	// LCM 을구한다
//	// A = aG, B = bG, C = cG, ...
//	// 라고할때LCM = abcG = A/G * B/G * C/G * G 라는성질을이용한다
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
//	while (v) // v가이면 u를 반환, 아니면loop
//	{
//		t = u % v;
//		u = v;
//		v = t;
//	}
//
//	return u;
//}