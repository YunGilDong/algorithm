//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//
//using namespace std;
//
//bool asc(int a, int b)
//{
//	return a < b;
//}
//
//int solution(vector<int> s1, vector<int> s2) {
//	int answer = 0;
//
//	sort(s1.begin(), s1.end(), asc);
//	sort(s2.begin(), s2.end(), asc);
//	int idx = 0;
//	for (idx = 0; idx < s2.size(); idx++)
//	{
//		if (s1[idx] != s2[idx])
//		{
//			answer = s1[idx];
//			break;
//		}
//	}
//
//	if (idx == s2.size())
//		answer = s1[idx];
//
//	return answer;
//}
//
//int main(void)
//{
//	vector<int> s1 = { 4,99,2,6,7,13,88,76 };
//	vector<int> s2 = { 6,88,13,4,99,2,7 };
//
//	int ret = solution(s1, s2);
//	cout << ret << endl;
//	
//	return 0;
//}