//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//vector<int> vPrime;
//
//bool primeNumberCheck(int n)
//{
//	bool ok = true;
//
//	if (n == 0|| n == 1)	return false;
//
//	for (int i = 2; i < n; i++)
//	{
//		if (n%i == 0)
//		{
//			ok = false;
//			break;
//		}
//	}
//
//	for (int i = 0; i < vPrime.size(); i++)
//	{
//		if (vPrime[i] == n)
//		{
//			ok = false;
//			break;
//		}
//	}
//
//	return ok;
//}
//
//string stringShift(string str)
//{
//	string newStr = str.substr(str.size() - 1);
//	newStr += str.substr(0, str.size() - 1);
//
//	return newStr;
//}
//
//int solution(string numbers) {
//	int answer = 0;
//	int ret = 0;
//	int len = numbers.size();
//	string strNum = "";
//	for (int numLen = 1; numLen <= len; numLen++)
//	{
//		for (int i = 0; i < len; i++)
//		{
//			//strNum = "";
//			strNum = numbers[i];
//			for (int j = 0; j < len; j++)
//			{
//
//				//strNum += numbers[j];
//				if (i == j)	continue;
//				if(numLen != 1)
//					strNum += numbers[j];
//
//				if (strNum.size() == numLen && numLen==1)
//				{
//					cout <<"[1]"<< strNum << endl;
//					int n = stoi(strNum);
//					if (primeNumberCheck(n)) {
//						vPrime.push_back(n);
//						ret++;
//					}
//					break;
//				}
//				else if (strNum.size() == numLen)
//				{
//					cout << "[2]" << strNum << endl;
//					string orinStr = strNum;
//					int n = stoi(strNum);
//					if (primeNumberCheck(n))
//					{
//						vPrime.push_back(n);
//						ret++;
//					}
//					// shift
//					for (int k = 1; k < numLen; k++)
//					{
//						string tmpStr = stringShift(strNum);
//						strNum = tmpStr;
//						n = stoi(strNum);
//						cout << "[3]" << strNum << endl;
//						if (primeNumberCheck(n))
//						{
//							vPrime.push_back(n);
//							ret++;
//						}
//					}
//					strNum = orinStr;
//					strNum.pop_back();		
//				}
//				
//			}
//		}
//	}
//	answer = ret;
//	return answer;
//}
//
//int main(void)
//{
//	int rst = solution(string("12345"));
//	cout << rst << endl;
//	return 0;
//}