//#include <string>
//#include <vector>
//#include <algorithm>
//#include <iostream>
//#include <sstream>
//using namespace std;
//
//string intToStr(int n)
//{
//	stringstream ss;
//	ss << n;
//	return ss.str();
//}
//
//bool compare2(string a, string b)
//{
//	//------------------------
//	/* 아래 코드를 이용하면 재귀를 할필요가 없다.!
//	//------------------------
//	if (a + b > b + a)
//		return true;
//	else false;
//	*/
//	//------------------------
//
//	// 재귀로 호출하여 검사.!
//	// 예 12, 1213
//	// 12, 12 검사
//	// 12, 13 검사!
//	cout << "A : [" << a << "]    B : [" << b<<"]"<< endl;
//	int lenA = a.length();
//	int lenB = b.length();
//	bool isFinish = false;
//
//	if (lenA == lenB)
//	{
//		for (int i = 0; i < lenA; i++)
//		{
//			if (a[i] > b[i])
//			{
//				return true;
//			}
//			else if (a[i] < b[i]) {
//				return false;
//			}
//		}
//		return false;	// 같은 길이 같은 숫자 일때
//	}
//
//	if (lenA < lenB)
//	{
//		int idx = 0;
//		for (idx = 0; idx < lenA; idx++)
//		{
//			if (a[idx] > b[idx])
//			{
//				isFinish = true;
//				return true;
//			}
//			else if (a[idx] < b[idx]) {
//				isFinish = true;	
//				return false;
//			}
//		}
//		if (!isFinish)
//		{
//			string tmp = b.substr(idx);
//			cout << idx<<":"<<tmp << endl;
//			return (compare2(a, b.substr(idx)));
//		}
//	}
//	else if (lenA > lenB)
//	{
//		int idx = 0;
//		for (idx = 0; idx < lenB; idx++)
//		{
//			if (a[idx] > b[idx])
//			{
//				isFinish = true;
//				return true;
//			}
//			else if (a[idx] < b[idx]) {
//				isFinish = true;
//				return false;
//			}
//		}
//		if (!isFinish)
//		{
//			return (compare2(a.substr(idx), b));
//		}
//	}
//}
////
////bool compare(string a, string b)
////{	
////	int lenA = a.length();
////	int lenB = b.length();
////	int minLen = min(lenA, lenB);
////	bool ok=false;	
////	bool end = false;
////	int idx = 0;
////	for (idx; idx < minLen; ++idx)
////	{
////		if (a[idx] > b[idx])
////		{
////			ok = true;
////			end = true;
////			break;
////		}
////		else if (a[idx] < b[idx])
////		{
////			ok = false;
////			end = true;
////			break;
////		}
////	}
////	if (!end && lenA < lenB)
////	{
////		for (idx; idx < lenB; ++idx)
////		{
////			if (b[0] > b[idx])
////			{
////				ok = true;
////				break;
////			}
////			else if (b[0] < b[idx])
////			{
////				ok = false;
////				break;
////			}
////			else
////			{
////				if (a[lenA - 1] > b[idx])
////				{
////					ok = true;
////					break;
////				}
////				else
////				{
////					ok = false;
////					break;
////				}
////
////			}
////		}
////	}
////	else if (!end &&lenA > lenB)
////	{
////		for (idx; idx < lenA; ++idx)
////		{
////			if (a[0] > a[idx])
////			{
////				ok = false;
////				break;
////			}
////			else if (a[0] < a[idx])
////			{
////				ok = true;
////				break;
////			}
////			else
////			{
////				if (b[lenB - 1] < a[idx])
////				{
////					ok = true;
////					break;
////				}
////				else
////				{
////					ok = false;
////					break;
////				}
////
////			}
////		}
////	}
////
////	return ok;	
////}
//
//string solution(vector<int> numbers) {
//	string answer = "";
//	vector<string> strNum;
//	int len = numbers.size();
//	for (int i = 0; i < len; i++)
//	{
//		stringstream ss;
//		ss << numbers[i];
//		strNum.push_back(ss.str());	
//	}
//	
//	sort(strNum.begin(), strNum.end(), compare2);
//	for (int i = 0; i < strNum.size(); ++i)
//	{		
//		if (strNum[0] == "0")
//		{
//			answer = "0";
//			break;
//		}
//
//
//		answer += strNum[i];
//	}
//	
//	return answer;
//}
//
//// 1. 최상위 자리 가장 큰 것부터.
//// 2. 최상위 자리가 같으면 다음 자릿수가 큰 것 .
//// 3. 자릿수 적은게 있으며 현제 자릿수랑 비교하여 큰것
//int main(void)
//{
//	//vector<int> n = { 12,1213 };
//	//vector<int> n = { 403,30 };
//	//vector<int> n = { 3333,33 };
//	//vector<int> n = { 3, 3333, 3334,5,9 };
//	vector<int> n = { 0,0,0,0 };
//	string str = "";
//	//compare2("12", "1213");
//	str = solution(n);
//	cout << str << endl;
//
//	return 0;
//}