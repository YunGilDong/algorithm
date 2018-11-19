//#include <iostream>
//#include <vector>
//#include <string>
//#include <set>
//#include <algorithm>
//
//using namespace std;
//vector<int> vPrime;
//set <int> sPrime;
//
//bool primeNumberCheck(int n)
//{
//	bool ok = true;
//
//	if (n == 0|| n == 1)	return false;
//	if (n % 2 == 0)
//	{
//		if (n == 2)	return true;
//		return false;
//	}
//
//	for (int i = 3; i < n/2; i++)
//	{
//		if (n%i == 0)
//		{
//			ok = false;
//			break;
//		}
//	}
//	return ok;
//}
//
//void numberSearch(string remainNum, string curNum)
//{
//	if (curNum != "")
//	{
//		if (primeNumberCheck(stoi(curNum)))
//		{
//			sPrime.insert(stoi(curNum));
//		}
//	}
//
//	if (remainNum.size() >= 0)
//	{
//		//cout << curNum << " " << endl;
//		// 기존값 복사
//		string tmpRemain(remainNum);
//		string tmpCurNum(curNum);
//		for (int i = 0; i < remainNum.size(); i++)
//		{
//			curNum.push_back(remainNum[i]);
//			remainNum.erase(i, 1);
//			numberSearch(remainNum, curNum);
//			remainNum = tmpRemain;
//			curNum = tmpCurNum;
//		}
//	}
//}
//
//int solution(string numbers) {
//	int answer = 0;
//	numberSearch(numbers, "");
//	answer = sPrime.size();
//	return answer;
//}
//
//int main(void)
//{
//	string str1;
//	string str("011");
//	int rst = solution(string("011"));
//	cout << "rst : " << rst << endl;;
//
//	vector<int> arr;
//	for (int i = 0; i < str.size(); i++)
//	{
//		char s = str[i];
//		arr.push_back(atoi(&s));
//	}
//	cout << str << endl;
//	while (next_permutation(arr.begin(), arr.end()))
//	{
//		for (int i = 0; i < arr.size(); i++)
//		{
//			cout << arr[i]<<" ";
//		}
//		cout << endl;
//	}
//}