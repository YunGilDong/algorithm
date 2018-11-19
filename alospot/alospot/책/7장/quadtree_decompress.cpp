//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//#define MAX_SIZE 256
//
//char decompressed[MAX_SIZE][MAX_SIZE];
//
////void decompress(string& s, int y, int x, int size)
//void decompress(string::iterator& it, int y, int x, int size)
//{
//	/*char ch = s[0];
//	string s1 = s.substr(1);*/
//	char ch = *(it);
//	++it;
//	cout << ch << " ";
//
//	if (ch == 'w' || ch == 'b')
//	{
//		for (int i = 0; i < size; i++)
//		{
//			for (int j = 0; j < size; j++)
//			{
//				decompressed[y + i][x + j] = ch;
//			}
//		}
//	}
//	else // ch is x
//	{
//		int half = size / 2;
//		decompress(it, y, x, half);
//		decompress(it, y, x + half, half);
//		decompress(it, y + half, x, half);
//		decompress(it, y + half, x + half, half);
//	}
//}
//
//string reverse(string::iterator& it)
//{
//
//	char ch= *(it);
//	++it;
//	if (ch == 'w' || ch == 'b')
//	{
//		return string(1, ch);
//	}
//	
//	string LU = reverse(it);
//	string RU = reverse(it);
//	string LD = reverse(it);
//	string RD = reverse(it);
//
//	return string("x") + LD + RD + LU + RU;
//}
//
//vector<vector<char> > reversTree(int sz)
//{
//	vector<vector<char> > rvs;
//	rvs.assign(16, vector<char>(16));
//
//	for (int i = 0; i < sz; i++)
//	{
//		for (int j = 0; j < sz; j++)
//		{
//			rvs[i][j] = decompressed[sz - 1 - i][j];
//		}
//	}
//
//	for (int i = 0; i < 16; i++)
//	{
//		for (int j = 0; j < 16; j++)
//		{
//			cout << rvs[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	return rvs;
//}
//
//int main(void)
//{
//	string str = "";
//	string::iterator it = str.begin();
//
//	int c;
//	cin >> c;
//	for (int i = 0; i < c; i++)
//	{
//		getline(cin, str);
//		string s = reverse(it);
//		cout << s << endl;
//	}
//	return 0;
//}