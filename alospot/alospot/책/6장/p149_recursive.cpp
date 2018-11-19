//#include <iostream>
//#include <stdio.h>
//#include <vector>
//
//using namespace std;
//
//void printPicked(vector<int> picked)
//{
//	for (int i = 0; i < 4; i++)
//		cout << picked[i] << " ";
//
//	
//	cout << endl;
//}
//
//void pick(int n, vector<int>& picked, int toPick)
//{
//	if (toPick == 0) {
//		printPicked(picked); return;
//	}
//	int smallest = picked.empty() ? 0 : picked.back() + 1;
//
//	for (int next = 0; next < n; ++next)
//	{
//		picked.push_back(next);
//		pick(n, picked, toPick - 1);
//		picked.pop_back();
//	}
//}
//
//void pick2(int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i+1; j < n; j++)
//		{
//			for (int k = j+1; k < n; k++)
//			{
//				for (int l = k+1; l < n; l++)
//				{
//					cout << i <<" " << j << " " << k << " " << l << endl;
//				}
//			}
//		}
//	}
//}
//
//int main(void)
//{
//	int n = 7;
//	vector<int> picked;
//	//pick2(7);
//	pick(7, picked, 4);
//	return 0;
//}