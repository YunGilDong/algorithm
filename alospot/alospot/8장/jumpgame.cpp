//#include <iostream>
//#include <vector>
//#include <cstring>
//
//using namespace std;
//
//int cache[100][100];
//
//int boardSize;
////int board[7][7] = {
////	{ 2, 5, 1, 6, 1, 4, 1 },
////	{ 6, 1, 1, 2, 2 ,9, 3 },
////	{ 7, 2, 3, 2, 1, 3, 1 },
////	{ 1, 1, 3, 1, 7, 1, 2 },
////	{ 4, 1, 2, 3, 4, 1, 2 },
////	{ 3, 3, 1, 2, 3, 4, 1 },
////	{ 1, 5, 2, 9, 4, 7, 0 }
////};
//
////int board[7][7] = {
////	{ 2, 5, 1, 6, 1, 4, 1 },
////	{ 6, 1, 1, 2, 2, 9, 3},
////	{ 7, 2, 3, 2, 1, 3, 1},
////	{ 1, 1, 3, 1 ,7 ,1 ,2},
////	{ 4, 1, 2, 3, 4, 1, 3},
////	{ 3, 3, 1, 2, 3, 4, 1},
////	{ 1, 5, 2, 9, 4, 7, 0}
////};
//
//int board[100][100];
//bool RST = false;
//
//bool areaCheck(int y, int x)
//{
//	bool ok = true;
//	if (y < 0 || y >= boardSize){
//		ok = false;
//	}
//	if (x < 0 || x >= boardSize)
//	{
//		ok = false;
//	}
//	return ok;
//}
//
//bool jumpgame(int y, int x)
//{
//	// 범위 초과
//	if (!areaCheck(y, x))
//	{
//		return false;
//	}
//	
//	// 끝 도착
//	if ((y == x) && (y == (boardSize - 1)))
//	{
//		RST = true;
//		return true;
//	}
//
//
//	if (!RST)
//	{
//		int val = board[y][x];
//		for (int i = 0; i < 2; i++)
//		{
//			//아래로 먼저 이동후 , 오른쪽 이동
//	
//			if (i == 0)
//				jumpgame(y + val, x);
//			else if (i == 1)
//				jumpgame(y, x + val);
//
//			if (RST)	break;
//		}
//	}
//	return RST;
//}
//
//int jumpgame2(int y, int x)
//{
//	if (y >= boardSize || x >= boardSize)
//		return 0;
//
//	if (y == (boardSize - 1) && y == x)
//	{
//		return 1;
//	}
//
//	int &ret = cache[y][x];
//	if (ret != -1)	return ret;
//	int jumpSz = board[y][x];
//	return ret = (jumpgame2(y + jumpSz, x) ||
//				  jumpgame2(y, x + jumpSz));
//}
//
//int main(void)
//{
//	int c = 0;
//	int n = 0;
//	cin >> c;
//
//	
//	for (int tcase = 0; tcase < c; tcase++)
//	{
//		cin >> n;
//		boardSize = n;
//		memset(cache, -1, sizeof(cache));
//		memset(board, 0, sizeof(board));
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				cin >> board[i][j];
//			}
//		}
//
//		if (jumpgame2(0, 0)==1)
//			cout << "YES" << endl;
//		else
//			cout << "NO" << endl;
//
//		RST = false;
//	}
//
//	return 0;
//}