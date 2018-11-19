//#include <iostream>
//#include <vector>
//#include <cstring>
//
//using namespace std;
//
//const int coverType[4][3][2] =
//{
//	{ {0, 0}, {1, 0},{0, 1} },
//	{ {0, 0}, {0, 1},{1, 1} },
//	{ {0, 0}, {1, 0},{1, 1} },
//	{ {0, 0}, {1, 0},{1, -1} }
//};
//
////vector<vector<int> > board;
////int board[20][20];
//int **board;
//int h, w;
//
//bool emptyAreaCheck(int h, int w)
//{
//	int cnt = 0;
//
//	for (int i = 0; i < h; i++)
//	{
//		for (int j = 0; j < w; j++)
//		{
//			if (!board[i][j])
//				cnt++;
//		}
//	}
//	if (cnt % 3 == 0)
//		return true;
//
//	return false;
//}
//
//bool set(int **board, int x, int y, int type, int delta)
//{
//	// ´þ°Å³ª Á¦°ÅÇÏ³ª°Å.
//	// °ãÄ¡°Å³ª °ËÀºÄ­À» µ¤À¸¸é false
//	bool ok = true;
//
//	for (int i = 0; i < 3; i++)
//	{
//		int ny = y + coverType[type][i][0];
//		int nx = x + coverType[type][i][1];
//
//		if (ny < 0 || ny >= h || nx < 0 || nx >= w)
//			ok = false;
//
//		if ((board[ny][nx] += delta) > 1)
//			ok = false;
//	}
//
//	return ok;
//}
//
//int boardCover()
//{
//	int ret = 0;
//	int y = -1, x = -1;
//	for (int i = 0; i < h; i++)
//	{
//		for (int j = 0; j < w; j++)
//		{
//			if (board[i][j] == 0)
//			{
//				y = i; x = j;
//				break;
//			}
//		}
//		if (y != -1)	break;
//	}
//
//	if (y == -1)	return 1;
//
//	for (int type = 0; type < 4; type++)
//	{
//		if (set(board, x, y, type, 1))
//			ret += boardCover();
//
//		set(board, x, y, type, -1);
//	}
//
//	return ret;
//}
//
//int main(void)
//{
//	int c;
//	
//	char ch;
//	cin >> c;
//	for (int tcase = 0; tcase < c; tcase++)
//	{
//
//		cin >> h >> w;
//		board = new int*[h];
//		for (int k = 0; k < h; k++)
//		{
//			board[k] = new int[w];
//			memset(board[k], 0, sizeof(int)*w);
//		}
//		//board.assign(h, vector<int>(w,0));
//		
//		for (int i = 0; i < h; i++)
//		{
//			for (int j = 0; j < w; j++)
//			{
//				cin >> ch;
//				if (ch == '#')
//					board[i][j] = 1;
//			}
//		}
//
//		if (!emptyAreaCheck(h, w))
//			cout << "0" << endl;
//		else
//			cout << boardCover() << endl;
//
//		delete[]board;
//		//board.clear();
//	}
//	
//	return 0;
//}