//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//int solution(vector<int> A, int S)
//{
//	int answer = 2;
//	int count = 0;
//	int sum = 0;
//	for (int i = 0; i < A.size(); i++)
//	{
//		sum = 0;
//		for (int j = 0+i; j < A.size(); j++)
//		{
//			sum += A[j];
//
//			if (sum > S)	break;
//
//			if (sum == S)
//			{
//				count++;
//				break;
//			}
//		}
//	}
//
//	answer = count;
//	return answer;
//}
//
//int main(void)
//{
//	vector<int> v = { 1,1,1,1 };
//
//	int ret = solution(v, 3);
//	cout << ret << endl;
//
//	
//	return 0;
//}