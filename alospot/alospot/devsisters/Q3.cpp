//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//
//using namespace std;
//
//int solution(int number, vector<int> firecracker) {
//	int answer = 0;
//	int len = firecracker.size();
//	bool check[100000] = { false, };
//	
//	int dist = 0;
//	int st = 0;
//	int end = 0;
//	for(int i=0; i<len; i++)
//	{
//		
//		if (firecracker[i] == 0)
//		{
//			continue;
//		}
//
//		dist = firecracker[i] * i;
//		cout << dist <<", "<<i<< endl;;
//		st = i - dist;
//		if (st < 0)
//		{
//			st = 0;
//			for (st; st < i; st++)
//			{
//				check[st] = true;
//			}
//		}
//		else
//		{
//			for (st; st < i; st++)
//			{
//				check[st] = true;
//			}
//		}
//	}
//	
//	for (int i = 0; i < len; i++)
//	{
//		if (!check[i])
//			answer++;
//	}
//
//	return answer;
//}
//
//int main(void)
//{
//
//	//vector<int> f = { 0,1,0,5 };
//	vector<int> f = { 1, 1, 3, 0, 0, 0, 2, 1, 0, 3 };
//	int ret = solution(10, f);
//
//	cout << ret << endl;
//
//
//	return 0;
//}