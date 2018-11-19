//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//
//using namespace std;
//int pos[4][2] = {
//	{0,1},{ 1,1 },{ 0,0 },{ 1,0 }
//};
//
//vector<vector<int>> solution(vector<vector<int>> matrix, int r) {
//	vector<vector<int>> answer;
//
//	int cnt = r % 4;
//	int sz = matrix[0].size();
//	answer.assign(sz, vector<int>(sz, 0));
//
//	if (cnt == 0)
//	{
//		for (int i = 0; i < sz; i++)
//			for (int j = 0; j < sz; j++)
//				answer[i][j] = matrix[i][j];
//	}
//
//	for (int k = 0; k < cnt; k++)
//	{
//		for (int i = 0; i < sz; i++)
//		{
//			for (int j = 0; j < sz; j++)
//			{
//				answer[j][sz - i - 1] = matrix[i][j];
//			}
//			cout << endl;
//		}
//
//		for (int i = 0; i < sz; i++)
//		{
//			for (int j = 0; j < sz; j++)
//			{
//				matrix[i][j] = answer[i][j];
//			}
//		}
//	}
//	return answer;
//}
//
//int main(void)
//{
//	vector<vector<int>> v = { {1,2},{3,4} };
//	vector<vector<int>> v2 = { { 4,1,2 },{ 7,3,4 },{3,5,6} };
//	vector<vector<int>> rst;
//	rst=solution(v2, 3);
//	cout << "###############" << endl;
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cout << rst[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	 
//	return 0;
//}