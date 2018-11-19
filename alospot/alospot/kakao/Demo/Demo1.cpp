//#include <iostream>
//#include <vector>
//#include <cassert>
//#include <string>
//
//using namespace std;
//
//bool solution(vector<int> arr)
//{
//	bool answer = true;
//	int sz = arr.size() + 1;
//	int *arrList = new int[sz];
//	memset(arrList, 0, sizeof(int)*sz);
//	for (int i = 0; i < arr.size(); i++)
//	{
//		//사이즈를 초과하는 수
//		if (arr[i] > arr.size())
//		{
//			answer = false;
//			break;
//		}
//		 //중복이 있을경우
//		if (arrList[arr[i]] > 1)
//		{
//			answer = false;
//			break;
//		}
//		arrList[arr[i]]++;
//
//	}
//	for (int i = 1; i <= arr.size(); i++)
//	{
//		if (arrList[i] == 0)
//		{
//			answer = false;
//			break;
//		}
//	}
//	return answer;
//}
//
//int main(void)
//{
//	vector <int>	arr;
//	char input;
//	string strInput;
//	string strNum = "";
//	getline(cin, strInput);
//
//	for (int i = 0; i < strInput.length(); i++)
//	{
//		if (strInput.at(i) == ' ')
//		{	
//			arr.push_back(atoi(strNum.c_str()));
//			strNum = "";
//		}
//		else
//		{
//			strNum += strInput.at(i);
//			cout << strNum << endl;
//			continue;
//		}
//	}
//	arr.push_back(atoi(strNum.c_str()));
//	
//	cout << solution(arr);
//
//	return 0;
//}