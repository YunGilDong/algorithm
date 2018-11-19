//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int blockType[4][3][2] = {
//	{ { 0,0 },{ 0,1 },{ 1,1 } },
//	{ { 0,0 },{ 1,0 },{ 1,1 } },
//	{ { 0,0 },{ 0,1 },{ 1,0 } },
//	{ { 0,0 },{ 1,0 },{ 1,-1 } }
//};
//int h, w;
//
//bool CoveredBlockCount(vector<vector<int> > board)
//{
//	int count = 0;
//	for (int i = 0; i < h; i++)
//	{
//		for (int j = 0; j < w; j++)
//		{
//			if (board[i][j] == 0)	count++;
//		}
//	}
//
//	return (count % 3 == 0) ? true : false;
//}
//
//bool set(int y, int x, int type, vector<vector<int> > &board, int delta)	//delta 1:put, delta-1:leave
//{
//	int dx, dy;
//	bool ok = true;
//	for (int i = 0; i < 3; i++)
//	{
//		dy = y + blockType[type][i][0];
//		dx = x + blockType[type][i][1];
//
//		if (dy < 0 || dy >= h || dx < 0 || dx >= w)	ok = false;
//
//		board[dy][dx] += delta;
//		if (board[dy][dx] > 1)	ok = false;
//	}
//	return ok;
//}
//
//int boardCover(vector<vector<int> >& board)
//{
//	int ret = 0;
//	int y=-1, x=-1;
//
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
//		if (y != -1)
//			break;
//	}
//
//	// 모두 덮었을 경우
//	if (y == -1)
//	{
//		return 1;
//	}
//
//	for (int type = 0; type < 4; type++)
//	{
//		// 놓고
//		if (set(y, x, type, board, 1))
//			ret += boardCover(board);
//
//		set(y, x, type, board, -1);
//	}
//
//	return ret;
//}
//
//int main(void)
//{
//	char ch;
//
//	cin >> h >> w;
//	vector <vector<int> > board;
//	board.assign(h, vector<int>(w, 0));
//
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
//	if (!CoveredBlockCount(board))
//		cout << "non 3 mul:0" << endl;
//	else
//		cout <<"3mul:"<< boardCover(board) << endl;
//
//	board.clear();
//
//	return 0;
//}