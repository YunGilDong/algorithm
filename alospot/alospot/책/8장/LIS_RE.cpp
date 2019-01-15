//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//
//using namespace std;
//vector<int> S;
//
//int LIS(const vector<int>&A)
//{
//	if (A.size() == 0)	return 0;
//	
//	int ret = 0;
//	for (int i = 0; i < A.size(); i++)
//	{
//		vector<int> B;
//		for (int j = i + 1; j < A.size(); j++)
//		{
//			if (A[i] < A[j])
//			{
//				B.push_back(A[j]);
//			}
//		}
//		ret = max(ret, (LIS(B) + 1));
//	}
//
//	return ret;
//}
//
//int main(void)
//{
//	vector<int> v;
//	int N;
//	int c;
//	cin >> c;
//	for (int i = 0; i < c; i++)
//	{
//		int ret = 1;
//		int num;
//		cin >> N;
//		for (int j = 0; j < N; j++)
//		{
//			cin >> num;
//			S.push_back(num);
//		}
//		for (int j = 0; j < N; j++)
//		{			
//			ret = max(ret, LIS(S));			
//		}
//		cout << ret << endl;
//		S.clear();
//	}
//
//	return 0;
//}