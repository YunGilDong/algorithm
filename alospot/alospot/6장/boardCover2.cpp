//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//const int converType[4][3][2] = {
//		{ {0, 0}, {1, 0},{0, 1} },
//		{ {0, 0}, {0, 1},{1, 1} },
//		{ {0, 0}, {1, 0},{1, 1} },
//		{ {0, 0}, {1, 0},{1, -1} }
//};
//int h, w;
//vector< vector<int> > board;
//
//bool emptyAreaCountCheck()
//{
//	int count = 0;
//	for (int i = 0; i < h; i++)
//	{
//		for (int j = 0; j < w; j++)
//		{
//			if (board[i][j] == 0)	count++;
//		}
//	}
//	if (count % 3 == 0)	return true;
//	return false;
//}
//
//bool set(vector<vector<int> >& board, int x, int y, int type, int delta)
//{
//	int nx, ny;
//	bool ok = true;
//	for (int i = 0; i < 3; i++)
//	{
//		// 블록을 위치할 좌표 값
//		ny = y + converType[type][i][0];
//		nx = x + converType[type][i][1];
//
//		if (ny < 0 || ny >= board.size() || nx < 0 || nx >= board[0].size())
//		{
//			ok = false;
//		}
//
//		board[ny][nx] += delta;
//		cout << "y, x" << ny << "," << nx << board[ny][nx] << endl;
//		if (board[ny][nx] > 1)
//		{
//			ok = false;
//		}
//	}
//	return ok;
//}
//
//int boardCover()
//{
//	int x=-1, y=-1;
//	int ret=0;
//
//	for (int i = 0; i < board.size(); i++)
//	{
//		for (int j = 0; j < board[i].size(); j++)
//		{
//			if (board[i][j] == 0)
//			{
//				y = i; 
//				x = j;
//				break;
//			}
//		}
//		if (y != -1)	break;
//	}
//	// 빈칸이 없으면 다 채운것이므로 1을 리턴
//	if (y == -1)	return 1;
//
//	for (int type = 0; type < 4; type++)
//	{
//		if (set(board, x, y, type, 1))
//		{
//			cout << y << ", " << x << endl;
//			ret += boardCover();
//		}
//
//		set(board, x, y, type, -1);
//	}
//
//	return ret;
//}
//
//int main(void)
//{
//	
//	char ch;
//
//	cin >> h>> w;
//	board.assign(h, vector<int>(w, 0));
//	for (int i = 0; i < h; i++)
//	{
//		for (int j = 0; j < w; j++)
//		{
//			cin >> ch;
//			if (ch == '#')
//				board[i][j] = 1;
//		}
//	}
//
//	if (!emptyAreaCountCheck())
//		cout << "0" << endl;
//	else
//		cout << boardCover() << endl;
//
//	return 0;
//}