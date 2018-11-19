//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//bool desc(int a, int b)
//{
//	return a > b;
//}
//
//int CutfenceMaxCount(vector<int> fence, int maxHeight)
//{
//	int panCnt = 0;
//	int tmpPanCnt = 0;
//	for (int floor = 1; floor <= maxHeight; floor++)
//	{
//		tmpPanCnt = 0;
//		for (int j = 0; j < fence.size(); j++)
//		{
//			if (fence[j] < floor)
//			{
//				tmpPanCnt *= floor;
//				panCnt = max(panCnt, tmpPanCnt);
//				tmpPanCnt = 0;
//				continue;
//			}
//
//			tmpPanCnt++;
//		}
//		tmpPanCnt *= floor;
//		panCnt = max(panCnt, tmpPanCnt);
//	}
//	
//	return panCnt;
//}
//
//int main(void)
//{
//	vector<int> v;
//
//	int c, n;
//	cin >> c;
//	
//	int maxFloor = 0;
//
//	for (int tcase = 0; tcase < c; tcase++)
//	{
//		cin >> n;
//		for (int i = 0; i < n; i++)
//		{
//			int num = 0;
//			cin >> num;
//			maxFloor = max(maxFloor, num);
//			v.push_back(num);
//		}
//		int rst = CutfenceMaxCount(v, maxFloor);
//		cout << rst << endl;
//
//		v.clear();
//	}
//
//	return 0;
//}