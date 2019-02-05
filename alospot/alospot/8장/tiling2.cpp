//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <cstring>
//
//using namespace std;
//int n;
//int mem[101];
//const int MOD = 1000000007;
//
//bool check(vector<vector<int>> tile)
//{
//	bool ok = true;
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (tile[i][j]==0)
//			{
//				ok = false;
//				break;
//			}
//		}
//	}
//	return ok;
//}
//void tilePrint(vector<vector<int>> tile)
//{
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cout << tile[i][j] << " ";
//
//		}
//		cout << endl;
//	}
//}
//
//int tiling(int colIdx, vector<vector<int>> &tile)
//{
//	// idx : column 으로 변경할 것
//	int ret1 = 0;
//	int ret2 = 0;
//
//	if (colIdx >= n)
//	{
//		if (check(tile))
//		{
//			//cout << "check()" << endl;
//			return 1;
//		}
//		else
//		{
//			//cout << "else " << endl;
//			return 0;
//		}
//	}
//
//	int& ret = mem[colIdx];
//
//	if (ret != -1)	return ret;
//	if (colIdx < (n - 1))
//	{
//		//가로 타일 
//		tile[0][colIdx] = 1;
//		tile[0][colIdx + 1] = 1;
//		tile[1][colIdx] = 1;
//		tile[1][colIdx + 1] = 1;
//
//		//tilePrint(tile);
//		ret1 += tiling((colIdx + 2), tile);
//		ret = ret1;
//		tile[0][colIdx] = 0;
//		tile[0][colIdx + 1] = 0;
//		tile[1][colIdx] = 0;
//		tile[1][colIdx + 1] = 0;
//	}
//	//세로타일
//	tile[0][colIdx] = 2;
//	tile[1][colIdx] = 2;
//
//	//tilePrint(tile);
//	ret2 += tiling(colIdx + 1, tile);
//	ret = (ret1 + ret2) % MOD;
//
//	tile[0][colIdx] = 0;
//	tile[1][colIdx] = 0;
//
//	return ret;
//}
//
//int main(void)
//{
//	int c;
//	int num;
//	vector<vector<int>> vtile;
//	cin >> c;
//	for (int i = 0; i < c; i++)
//	{
//		memset(mem, -1, sizeof(mem));
//		cin >> num;
//		n = num;
//		vtile.assign(2, vector<int>(101, 0));
//		int ret = tiling(0, vtile);
//		cout << ret << endl;
//		vtile.clear();
//	}
//
//	return 0;
//}