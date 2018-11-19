//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//char board[5][6];
//
////int dx[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };
////int dy[8] = { -1, 0, 1,-1, 1, -1, 0, 1 };
//
//int dx[8] = { -1,  0,  1, -1, 1, -1, 0, 1 };
//int dy[8] = { -1, -1, -1,  0, 0,  1, 1, 1 };
//
//bool checkArea(int y, int x)
//{
//	if (y < 0 || y>4 || x < 0 || x>4)
//		return false;
//
//	return true;
//}
//
//bool hasWord(int y, int x, string& word)
//{
//	if (!checkArea(y, x))	return false;
//
//	if (board[y][x] != word[0])	return false;
//
//	cout <<"#" <<word << endl;
//
//	if (word.size() == 1) {
//		cout << "#-1" << word << endl;
//		return true;
//	}
//
//	for (int i = 0; i < 8; ++i)
//	{
//		int nextX = x + dx[i];
//		int nextY = y + dy[i];
//		if (hasWord(nextY, nextX, word.substr(1)))
//		{
//			cout <<"true:"<< word << endl;
//			return true;
//		}
//	}
//	return false;
//}
//
//int main(void)
//{
//	int c,n;
//	char ch;
//	string word[10];
//	string strRst[10];
//
//	//cin >> c;
//	for (int i = 0; i < 5; i++)
//	{
//		cin >> board[i];
//	}
//	cin >> n;
//	//strRst = new string[n];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> word[i];
//	}
//	
//	// hasWord
//	for (int k = 0; k < n; k++)
//	{
//		for (int y = 0; y < 5; y++)
//		{
//			for (int x = 0; x < 5; x++)
//			{
//				if (hasWord(y, x, word[k]))
//				{
//					strRst[k] = "YES";
//					y = 5; x = 5;
//				}
//				else
//					strRst[k] = "NO";
//			}
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		cout << word[i] << " " << strRst[i] << endl;
//		word[i] = "";
//	}
//	return 0;
//}