//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//
//#define min(a,b)	((a>b)?b:a)
//
//using namespace std;
//
//int arr[2] = { 3,5 };
//bool allSearchLF = false;
//int initNum = 0;
//
////
////int solution2(int n)
////{
////	int answer = 0;
////	int ret = 999999999;
////	int tmpRet = 0;
////
////	if (n == 0)	return 0;
////	if (n < 3)	return 999999999;
////
////	else
////	{
////		ret++;
////		solution(n - 5);
////		solution(n - 3);
////	}
////
////	answer = ret;
////	if (answer == 0)
////		answer = -1;
////	if (answer >= 999999998)
////		answer = -1;
////
////}
//
//
//int solution(int n)
//{
//	int answer = 0;
//	int ret = 999999999;
//	int tmpRet = 999999999;
//	//cout << n << " ";
//	if (n == 0)	return 0;
//	if (n < 3)	return 999999999;
//	//if (n > 1)
//	else
//	{
//		/*tmpRet += (solution(n - 5) + 1);
//		ret = min(ret, tmpRet);
//		cout << "[5 : ]" << ret<<", "<< tmpRet<<" ";
//
//		tmpRet += (solution(n - 3) + 1);
//		ret = min(ret, tmpRet);
//		cout << endl;
//		cout << "[3 : ]" << ret << ", " << tmpRet << " ";*/
//
//		//----------------------------------------------------------
//		/*cout <<"[5]: "<< (solution(n - 5) + 1)<< " (" << n << ")  ";
//		cout << endl;
//		cout <<"[3]: "<< (solution(n - 3) + 1) << " ("<<n<<")  ";
//		cout << endl;*/
//
//		if (!allSearchLF)
//		{
//			tmpRet = (solution(n - 5) + 1);
//			ret = min(ret, tmpRet);
//		}
//		if (initNum == n)
//			allSearchLF = true;
//		tmpRet = (solution(n - 3) + 1);
//			ret = min(ret, tmpRet);
//	}
//
//	answer = ret;
//	//cout << "###" << answer << " " << endl;
//	/*if(answer==0)
//		answer = -1;
//	if (answer >= 999999998)
//		answer = -1;*/
//	return answer;
//}
//
//int main(void)
//{
//	int rst = 0;
//	vector<int> v = { 22 };
//	int n = 1010;
//	initNum = n;
//	rst = solution(n);
//	cout << endl;
//	cout << rst << endl;
//
//
//	return 0;
//}