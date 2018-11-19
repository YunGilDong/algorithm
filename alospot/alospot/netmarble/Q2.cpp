//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//
//using namespace std;
//
//bool desc(int a, int b)
//{
//	return a > b;
//}
//
//int solution(vector<int> paper)
//{
//	int answer = -1;
//	int gSum = 0;
//	int maxVal = -1;
//	int gPow = 0;
//
//	sort(paper.begin(), paper.end(), desc);
//
//	for (int i = 0; i < paper.size(); i++)
//	{
//		gSum = 0;
//		for (int j = 0; j <= i; j++)
//		{
//			gSum += paper[j];
//		}
//		gPow = pow(i + 1, 2);
//		if (gSum >= gPow)
//		{
//			if (maxVal < gSum)
//				answer = i + 1;
//		}
//	}
//	return answer;
//}
//
//int main(void)
//{
//	//vector<int> v = { 7, 5, 8, 10, 6, 9, 5 };
//	//vector<int> v = { 1,0,0,3,0,1 };
//	vector<int> v = { 10000,10000,10000,10000,10000,10000,10000 };
//	int rst = 0;
//	rst = solution(v);
//	cout << rst << endl;
//	return 0;
//}