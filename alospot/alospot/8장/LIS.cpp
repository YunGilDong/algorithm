//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//vector<int> S;
//int N;
//int cache[100];
//int LIS(vector<int> A)
//{
//	int ret = 0;
//
//	if (A.empty())	return 0;
//
//	for (int i = 0; i < A.size(); i++)
//	{
//		vector<int> B;
//		for (int j = i + 1; j<A.size(); j++)
//		{
//			if (A[i] < A[j])
//			{
//				B.push_back(A[j]);
//			}
//		}
//		ret = max(ret, LIS(B) + 1);
//	}
//	return ret;
//}
//
//int LIS2(int start)
//{
//	int& ret = cache[start];
//
//	if (ret != -1)	return ret;
//
//	ret = 1;
//	for (int next = start + 1; next < N; next++)
//	{
//		if (S[start] < S[next])
//		{
//			ret = max(ret, LIS2(next) + 1);
//		}
//	}
//	return ret;
//}
//
//int main(void)
//{
//	vector<int> v;
//	
//	int c;
//	cin >> c;
//	for (int i = 0; i < c; i++)
//	{
//		int ret = 1;
//		memset(cache, -1, sizeof(cache));
//		int num;
//		cin >> N;
//		for (int j = 0; j < N; j++)
//		{
//			cin >> num;
//			S.push_back(num);
//		}
//		for (int j = 0; j < N; j++)
//		{			
//			ret = max(ret, LIS2(j));			
//		}
//		cout << ret << endl;
//		S.clear();
//	}
//
//	return 0;
//}