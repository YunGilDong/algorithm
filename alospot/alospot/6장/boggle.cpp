//#include <iostream>
//#include <string>
//#include <stdio.h>
//#include <string.h>
//
//using namespace std;
//
//int dx[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };
//int dy[8] = { -1, 0, 1,-1, 1, -1, 0, 1 };
//char board[5][6];
//
//bool inRange(int x, int y)
//{
//	if (x < 0 || x>4)	return false;
//	if (y < 0 || y>4)	return false;
//
//	return true;
//}
//
//bool hasWord(int x, int y, const string word)
//{
//	if (!inRange(x, y))	return false;
//
//	if (board[x][y] != word[0])
//		return false;
//
//	if (word.size() == 1)	return true;
//
//	for (int i = 0; i < 8; i++)
//	{
//		int nextX = x + dx[i];
//		int nextY = y + dy[i];
//		if (hasWord(nextX, nextY, word.substr(1)))
//			return true;
//	}
//
//	return false;
//}
//
//int main(void)
//{
//	int c, n;
//	string word[10];
//	string rst[10];
//
//	cin >> c;
//	for (int i = 0; i < c; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			cin >> board[j];
//		}
//
//		cin >> n;
//		for (int i = 0; i < n; i++)
//			cin >> word[i];
//
//		//============================================
//		// recursive
//		//============================================
//		for (int i = 0; i < n; i++)
//		{
//			for (int x = 0; x < 5; x++)
//			{
//				for (int y = 0; y < 5; y++)
//				{
//					if (hasWord(x, y, word[i]))
//					{
//						rst[i] = "YES";
//						x = 5; y = 5;
//					}
//					else
//						rst[i] = "NO";
//				}
//			}
//		}
//
//		for (int i = 0; i < n; i++)
//		{
//			cout << word[i] << " " << rst[i] << endl;
//			word[i] = "";
//			rst[i] = "";
//		}
//
//		for (int i = 0; i < 5; i++)
//			memset(board[i], 0x00, sizeof(board[i]));
//	}
//
//	return 0;
//}