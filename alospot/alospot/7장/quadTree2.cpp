//#include <iostream>
//#include <string>
//
//using namespace std;
//
//string reverse(string::iterator& it)
//{
//	char head = *it;
//	it++;
//
//	if (head == 'w' || head == 'b')
//		return string(1, head);
//
//	string LU = reverse(it);
//	string RU = reverse(it);
//	string LD = reverse(it);
//	string RD = reverse(it);
//
//	return string("x") + LD + RD + LU + RU;
//}
//
//int main(void)
//{
//	int c=0;
//	cin >> c;
//	//string str = "xxwwwbxwxwbbbwwxxxwwbbbwwwwbb";
//	//string str = "xbwxwbbwb";
//	string str = "";
//	string::iterator it;
//	it = str.begin();
//
//	string remainder;
//	getline(cin, remainder);
//
//	for (int i = 0; i < c; i++)
//	{
//		
//
//		getline(cin, str);
//		it = str.begin();
//		string rst = reverse(it);
//		cout << rst << endl;
//		str = "";
//	}
//	return 0;
//}