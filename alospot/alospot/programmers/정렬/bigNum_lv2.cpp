#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <sstream>
using namespace std;

string intToStr(int n)
{
	stringstream ss;
	ss << n;
	return ss.str();
}

bool compare2(string a, string b)
{
	//------------------------
	/* �Ʒ� �ڵ带 �̿��ϸ� ��͸� ���ʿ䰡 ����.!
	//------------------------
	if (a + b > b + a)
		return true;
	else false;
	*/
	//------------------------

	// ��ͷ� ȣ���Ͽ� �˻�.!
	// �� 12, 1213
	// 12, 12 �˻�
	// 12, 13 �˻�!
	cout << "A : [" << a << "]    B : [" << b<<"]"<< endl;
	int lenA = a.length();
	int lenB = b.length();
	bool isFinish = false;

	if (lenA == lenB)
	{
		for (int i = 0; i < lenA; i++)
		{
			if (a[i] > b[i])
			{
				return true;
			}
			else if (a[i] < b[i]) {
				return false;
			}
		}
		return false;	// ���� ���� ���� ���� �϶�
	}

	if (lenA < lenB)
	{
		int idx = 0;
		for (idx = 0; idx < lenA; idx++)
		{
			if (a[idx] > b[idx])
			{
				isFinish = true;
				return true;
			}
			else if (a[idx] < b[idx]) {
				isFinish = true;	
				return false;
			}
		}
		if (!isFinish)
		{
			string tmp = b.substr(idx);
			cout << idx<<":"<<tmp << endl;
			return (compare2(a, b.substr(idx)));
		}
	}
	else if (lenA > lenB)
	{
		int idx = 0;
		for (idx = 0; idx < lenB; idx++)
		{
			if (a[idx] > b[idx])
			{
				isFinish = true;
				return true;
			}
			else if (a[idx] < b[idx]) {
				isFinish = true;
				return false;
			}
		}
		if (!isFinish)
		{
			return (compare2(a.substr(idx), b));
		}
	}
}
//
//bool compare(string a, string b)
//{	
//	int lenA = a.length();
//	int lenB = b.length();
//	int minLen = min(lenA, lenB);
//	bool ok=false;	
//	bool end = false;
//	int idx = 0;
//	for (idx; idx < minLen; ++idx)
//	{
//		if (a[idx] > b[idx])
//		{
//			ok = true;
//			end = true;
//			break;
//		}
//		else if (a[idx] < b[idx])
//		{
//			ok = false;
//			end = true;
//			break;
//		}
//	}
//	if (!end && lenA < lenB)
//	{
//		for (idx; idx < lenB; ++idx)
//		{
//			if (b[0] > b[idx])
//			{
//				ok = true;
//				break;
//			}
//			else if (b[0] < b[idx])
//			{
//				ok = false;
//				break;
//			}
//			else
//			{
//				if (a[lenA - 1] > b[idx])
//				{
//					ok = true;
//					break;
//				}
//				else
//				{
//					ok = false;
//					break;
//				}
//
//			}
//		}
//	}
//	else if (!end &&lenA > lenB)
//	{
//		for (idx; idx < lenA; ++idx)
//		{
//			if (a[0] > a[idx])
//			{
//				ok = false;
//				break;
//			}
//			else if (a[0] < a[idx])
//			{
//				ok = true;
//				break;
//			}
//			else
//			{
//				if (b[lenB - 1] < a[idx])
//				{
//					ok = true;
//					break;
//				}
//				else
//				{
//					ok = false;
//					break;
//				}
//
//			}
//		}
//	}
//
//	return ok;	
//}

string solution(vector<int> numbers) {
	string answer = "";
	vector<string> strNum;
	int len = numbers.size();
	for (int i = 0; i < len; i++)
	{
		stringstream ss;
		ss << numbers[i];
		strNum.push_back(ss.str());	
	}
	
	sort(strNum.begin(), strNum.end(), compare2);
	for (int i = 0; i < strNum.size(); ++i)
	{		
		if (strNum[0] == "0")
		{
			answer = "0";
			break;
		}


		answer += strNum[i];
	}
	
	return answer;
}

// 1. �ֻ��� �ڸ� ���� ū �ͺ���.
// 2. �ֻ��� �ڸ��� ������ ���� �ڸ����� ū �� .
// 3. �ڸ��� ������ ������ ���� �ڸ����� ���Ͽ� ū��
int main(void)
{
	//vector<int> n = { 12,1213 };
	//vector<int> n = { 403,30 };
	//vector<int> n = { 3333,33 };
	//vector<int> n = { 3, 3333, 3334,5,9 };
	vector<int> n = { 0,0,0,0 };
	string str = "";
	//compare2("12", "1213");
	str = solution(n);
	cout << str << endl;

	return 0;
}