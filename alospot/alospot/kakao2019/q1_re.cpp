//#include <string>
//#include <vector>
//#include <stdlib.h>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//bool check(string a, string b)
//{
//	cout << "F : " << a << ", " << "R  : " << b << endl;
//	if (a.length() != b.length())
//		return false;
//
//	bool ok = true;
//	for (int i = 0; i < a.length(); i++)
//	{
//		if (a[i] != b[i])
//		{
//			ok = false;
//			break;
//		}
//	}
//
//	return  ok;
//}
//
//int travel(string src, string& dst, int n)
//{	
//	if (src.length() <= 1)
//	{
//		return dst.length() +src.length();
//	}
//	
//	string a = "";
//	string b = "";
//	int pos = 0;
//	a = src.substr(pos, n);
//	
//	string tempSrc = "";
//	int count = 1;
//	bool isClear = true;
//	while (pos+n < src.length())
//	{
//				
//		pos = pos+n;		
//		b = src.substr(pos, n);		
//
//		if (check(a, b))
//		{			
//			count++;
//		}
//		else
//		{
//			isClear = false;
//			if (count == 1)
//			{
//				for (int i = 0; i < a.length(); i++)
//				{
//					dst.push_back(a[i]);
//				}
//				//dst.push_backa[0];				
//				tempSrc = src.substr(n, src.length());
//				//cout << "dst(1) : " << dst << endl;
//				//cout << "tempSrc(1) : " << tempSrc << endl;
//				break;
//			}
//			else
//			{
//				string strNum = to_string(count);
//				dst.push_back(strNum[0]);
//				for (int i = 0; i < a.length(); i++)
//					dst.push_back(a[i]);
//
//		
//
//				tempSrc = src.substr(n*count, src.length());
//
//				//cout << "dst(2) : " << dst << endl;
//				//cout << "tempSrc(2) : " << tempSrc << endl;
//				break;
//			}
//		}	
//	}
//
//	if (isClear)
//	{
//		string strNum = to_string(count);
//		dst.push_back(strNum[0]);
//		for (int i = 0; i < a.length(); i++)
//			dst.push_back(a[i]);
//
//		tempSrc = "";
//		//tempSrc = src.substr(n * count, src.length());
//		
//	}
//
//	cout << "dst : " << dst << endl;
//	cout << "tempSrc : " << tempSrc << endl;
//
//
//
//	int ret = 9999;
//	ret = min(ret, travel(tempSrc, dst, n));
//
//	return ret;
//}
//
//int solution(string s) {
//	int answer = 0;
//
//	string dst = "";
//	answer = 9999;
//	for (int i = 1; i <= s.length() / 2; i++)
//	{
//		cout << "[" << i << "]" << endl;
//		dst = "";
//		int n = travel(s, dst, i);
//		answer = min(answer, n);
//
//		//cout << "N : " << n << endl;
//		//cout << "answer : " << answer << endl;
//
//	}
//
//	return answer;
//}
//
//int main(void)
//{
//	//string s = "abcabcdede";
//	//string s = "ababcdcdababcdcd";
//	//string s = "abcabcabcabcdededededede";
//	//string s = "xababcdcdababcdcd";
//	//string s = "aabbaccc";
//	string s = "aaaaaaaaaa";
//	int n = solution(s);
//	cout << n << endl;;
//
//	cout << ">>>>>" << n << endl;
//
//	return 0;
//}