//#include <iostream>
//#include <string>
//#include <vector>
//#include <cmath>
//
//#define BLK 1
//#define WH	0
//#define MAX_SIZE 256
//
//using namespace std;
//char decompressed[MAX_SIZE][MAX_SIZE];
//
//void decompress(string::iterator& it, int y, int x, int sz, string &s)
//{
//	char head = *(it++);
//	cout << head <<"("<<sz<<")  ";
//	
//
//	/*head = s[0];
//	s = s.substr(1);
//	cout << "#" << s << "#   ";*/
//
//	if (head == 'b' || head == 'w')
//	{
//		for (int i = 0; i < sz; i++)
//		{
//			for (int j = 0; j < sz; j++)
//			{
//				decompressed[y+i][x+j] = head;
//			}
//		}
//	}
//	else
//	{
//		int half = sz / 2;
//		decompress(it, y, x, half, s);
//		decompress(it, y, x+ half, half, s);
//		decompress(it, y+half, x, half, s);
//		decompress(it, y+ half, x+ half, half, s);
//	}
//}
//
//int main(void)
//{
//	char ch;
//	string str[4];
//	string str1 = "xbwxwbbwb";
//	string str2 = "xxwwwbxwxwbbbwwxxxwwbbbwwwwbb";
//	
//	string::iterator it = str2.begin();
//	
//	decompress(it, 0, 0, 16, str2);
//	cout << endl;
//	for (int i = 0; i < 16; i++)
//	{
//		for (int j = 0; j < 16; j++)
//		{
//			cout << decompressed[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//
//	return 0;
//}