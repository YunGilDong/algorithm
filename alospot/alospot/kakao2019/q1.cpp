//#include <string>
//#include <vector>
//#include <iostream>
//#include <stdlib.h>
//#include <algorithm>
//
//using namespace std;
//
//string check(string str, int n, bool *chk)
//{
//	cout <<"str : "<< str << endl;
//	bool ok = true;
//	for (int i = 0; i < str.length() / 2; i++)
//	{
//		if (n == 2)
//		{
//			if (str[i] != str[1 + i])
//			{
//				ok = false;
//				//cout << str[i] << ", " << str[n + i] << endl;
//			}
//		}
//		else
//		{
//			if (str[i] != str[n + i])
//			{
//				ok = false;
//				//cout << str[i] << ", " << str[n + i] << endl;
//			}
//		}
//	}
//
//	string checkStr = "";
//	if (ok)
//	{
//		
//		checkStr = to_string(n);
//		if (n > 2)
//		{
//			for (int i = 0; i < n; i++)
//			{
//				checkStr.push_back(str[i]);
//			}
//		}
//		else
//		{
//			checkStr.push_back(str[0]);
//		}
//		//cout <<"## : "<< checkStr << endl;
//		*chk = true;
//		return checkStr;
//	}
//	*chk = false;
//	checkStr = str;
//	//cout <<"CHK : "<< checkStr << endl;
//	return checkStr;
//	//return str.substr(0, 1);
//}
//
//int travel(string src, string &dst, int n)
//{
//	if (src.length() <= 1)
//	{
//		cout << "dst : "<<dst << endl;
//		return dst.length() + src.length();
//	}
//
//	
//	if (n>2 && n * 2 > src.length())
//	{
//		for (int i = 0; i < src.length(); i++)
//		{
//			dst.push_back(src[i]);
//				
//		}
//		cout << "dst(2) : " << dst << endl;
//		return dst.length();
//	}
//		
//
//	string s = "";
//	string tempSrc = "";
//	if (n != 2)
//	{
//		s = src.substr(0, n * 2);
//		//cout << "s : " << s << endl;
//		tempSrc = src.substr(n * 2, src.length());
//	}
//	else
//	{
//		s = src.substr(0, 2);
//		//cout << "s : " << s << endl;
//		tempSrc = src.substr(2, src.length());
//	}
//	bool chk;
//	string checkStr = check(s, n, &chk);
//	for (int i = 0; i < checkStr.length(); i++)
//	{		
//		dst.push_back(checkStr[i]);		
//		/*if (!chk)
//		{
//			tempSrc = src.substr(1, src.length());
//			cout << "!!!" << tempSrc << endl;
//		}*/
//	}
//	cout << "*DST ; " << dst << endl;
//	cout << "*tempSrc ; " << tempSrc << endl;
//	int ret = 9999;
//	ret = min(ret, travel(tempSrc, dst, n));
//
//	return ret;
//}
//
//int solution(string s) {
//	int answer = 0;
//	string dst = "";
//	answer = s.length();
//	for (int i = 2; i <= s.length() / 2; i++)
//	{
//		dst = "";
//		cout <<"["<< i <<"]"<< endl;
//
//		int n = travel(s, dst, i);
//		cout << ">> n <<" << n << endl;
//		answer = min(answer, n);
//		cout << ">>" << answer << endl;
//		
//	}
//
//	return answer;
//}
//
////int main(void)
////{
////	//string s = "abcabcdede";
////	//string s = "ababcdcdababcdcd";
////	//string s = "abcabcabcabcdededededede";
////	//string s = "xababcdcdababcdcd";
////	string s = "aabbaccc";
////	int n = solution(s);
////	cout << n << endl;;
////
////	cout << ">>>>>" << n << endl;
////
////	return 0;
////}