//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//bool solution(string s1, string s2) {
//	bool answer = true;
//
//	char prevS1 = s1[0];
//	int s1Idx = 1;
//
//	if (s1[0] != s2[0])
//		return false;
//
//	if (s1.size() > s2.size())
//		return false;
//
//
//	for (int i = 1; i < s2.length(); i++)
//	{
//		if (s1[s1Idx] == s2[i])
//		{
//			prevS1 = s1[s1Idx];
//			s1Idx++;	
//		}
//		else
//		{
//			if (prevS1 == s2[i])
//				continue;
//			else
//			{
//				answer = false;
//				break;
//			}
//		}
//	}
//	return answer;
//}
//
//int main(void)
//{
//	string s1 = "cookie";
//	//string s2 = "cooookieee";
//	string s2 = "cooke";
//
//	int ret = solution(s1, s2);
//	cout << ret << endl;
//
//	return 0;
//}