//#include <stdio.h>
//#include <iostream>
//
//using namespace std;
//
//double festival(int n, int l, int *arrN)
//{
//	int st = 0, end = l - 1;
//	int st_, end_, gap;
//	int sum = 0;
//	double rst = 1000.0;
//
//	for (int i = 0; i <= n - l; i++)
//	{		
//		for (int j = 0; j <= n - l - i; j++)
//		{					
//			st_ = st+j;
//			end_ = end + j;
//			gap = end_ - st_ + 1;
//			for (st_; st_ <= end_; st_++)
//			{
//				sum += arrN[st_];
//			}
//			if (rst > (double)sum / gap)
//				rst = (double)sum / gap;
//			
//			sum = 0;
//		}
//		st = 0;
//		end += 1;
//	}	
//	return rst;
//}
//
//int main(void)
//{
//	int c, n, l;
//	int arrN[1000];		
//	double *rst;
//	
//	cin >> c;
//	rst = new double[c];
//	for (int i = 0; i < c; i++)
//	{
//		cin >> n >> l;
//		for (int j = 0; j < n; j++)
//		{
//			cin >> arrN[j];
//		}
//		rst[i] = festival(n, l, arrN);		
//	}
//	for (int i = 0; i < c; i++)
//		printf("%.8lf\n", rst[i]);
//	
//
//	delete[] rst;
//	return 0;
//
//}