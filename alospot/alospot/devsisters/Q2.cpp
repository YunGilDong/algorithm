//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//
//using namespace std;
//
//
//bool fncsolu(string s1, string s2)
//{
//	int pos = 0;
//	bool ok = false;
//	bool ret = false;
//
//	if (s1.size() == 0)	return true;
//
//	while (pos < s1.size() && pos < s2.size())
//	{
//		if (s1[pos] == s2[pos])
//		{
//			ok = true;
//			++pos;
//		}
//		else
//			break;
//	}
//	
//	if (pos == s1.size())
//	{
//		if (pos == s2.size())
//			return true;
//	}
//
//	int n = (pos == 0) ? 1 : 0;
//	for (int i = 0; (i+pos) < s2.size(); i++)
//	{
//	
//		if (fncsolu(s1.substr(pos), s2.substr(pos + i+n)))
//			return true;
//	}
//	return ret;
//}
//
//bool solution(string s1, string s2) {
//	bool answer = true;
//
//	if (s1.size() > s2.size())
//		answer = false;
//
//	else
//	{
//		answer = fncsolu(s1, s2);
//	}
//	return answer;
//}
//
//int main(void)
//{
//	string s1 = "cookie";
//	//string s2 = "cooookieee";
//	string s2 = "cookoie";
//	solution(s1, s2);
//	return 0;
//}