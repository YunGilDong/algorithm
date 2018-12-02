//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//int validIdxArr[1000][2] = { 0, };
//
//bool check(string s)
//{
//	int u, d, r, l;
//	u = d = r = l = 0;
//	bool ok = false;
//	for (int i = 0; i < s.length(); i++)
//	{
//		if (s[i] == 'U')	u++;
//		if (s[i] == 'D')	d++;
//		if (s[i] == 'R')	r++;
//		if (s[i] == 'L')	l++;
//	}
//
//	if ((u == d) && (r == l))	ok = true;
//	if ((u == 0) && (d == 0) && (r == 0) && (l == 0))	ok = false;
//
//	return ok;
//}
//
//
//int solution(string s)
//{
//	int answer = 5;
//	int count = 0;
//	int strGrp = 0;
//	string strCmd;
//	int validIdx = 0;
//	for (int i = 0; i < s.length(); i++)
//	{
//		strGrp += 2;
//		for (int j = 0; j < s.length(); j++)
//		{
//			int k;
//			for (k = j; k < (j + strGrp); k++)
//			{
//
//				if (k > s.length())
//				{
//					strCmd.clear();
//					strCmd = "";
//					break;
//				}
//				strCmd.push_back(s[k]);
//			}
//
//
//			if ((strCmd.length() >= 2) && (strCmd.length() % 2) == 0)
//			{
//				if (check(strCmd))
//				{
//					count++;
//				}
//
//				if (strGrp == 2)
//				{
//					validIdxArr[validIdx][0] = j;
//					validIdxArr[validIdx][1] = k;
//				}
//			}
//			strCmd.clear();
//			strCmd = "";
//		}
//	}
//
//	answer = count;
//	return answer;
//}
//
//int main(void)
//{
//	//string s = "URLLDRLR";
//	string s = "URDLDRULDLRUDLU";
//
//	int ret = solution(s);
//	cout << ret << endl;
//	return 0;
//}