//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//string W, S;
//int cache[101][101];
//
//bool asc(string a, string b)
//{
//	return a < b;
//}
//
//bool wildCard2(int w, int s)
//{
//	int &ret = cache[w][s];
//	if (ret != -1)	return ret;
//
//	cout << W.substr(w) << ", " << S.substr(s) << endl;
//	while (w < W.size() && s < S.size())
//	{
//		if (W[w] == '?' || W[w] == S[s])
//		{
//			++w;
//			++s;
//		}
//
//		else
//			break;
//	}
//
//	if (W[w] == '*')
//	{
//		for (int i = 0; (i + s) <= S.size(); i++)
//		{
//			if (wildCard2(w + 1, s + i))
//			{
//				cout << "true!!" << endl;
//				return ret = 1;
//			}
//		}
//	}
//	return ret = 0;
//}
//
//bool wildCard(string w, string s)
//{
//	int pos = 0;
//	while (pos < w.size() && pos < s.size())
//	{
//		if (w[pos] == '?' || w[pos] == s[pos])
//			++pos;
//		else
//			break;
//	}
//
//	if (pos == w.size())
//		if (pos == s.size())
//			return true;
//
//	if (w[pos] == '*')
//	{
//		for (int i = 0; (i+pos) <= s.size(); i++)
//		{
//			if (wildCard(w.substr(pos + 1), s.substr(pos + i)))
//				return true;
//		}
//	}
//
//	return false;
//}
//
//int main(void)
//{
//	int c;
//
//	string wildStr;
//	string fileNmStr[50];
//	int n;
//
//
//	vector<string> vstr;
//
//	cin >> c;
//	string remainder;
//	getline(cin, remainder);
//	for (int i = 0; i < c; i++)
//	{
//		getline(cin, wildStr);
//		cin >> n;
//		getline(cin, remainder);
//		for (int j = 0; j < n; j++)
//		{
//			memset(cache, -1, sizeof(cache));
//			fileNmStr[j] = "";
//
//			getline(cin, fileNmStr[j]);
//
//			//if (wildCard(wildStr, fileNmStr[j]))
//			//{
//			//	vstr.push_back(fileNmStr[j]);
//			//	//cout << "true : " <<fileNmStr<< endl;
//			//}
//
//			W = wildStr;	S = fileNmStr[j];
//			if (wildCard2(0, 0))
//			{
//				cout << "true" << endl;
//				vstr.push_back(fileNmStr[j]);
//			}
//
//		}
//	}
//	sort(vstr.begin(), vstr.end(), asc);
//	for (int i = 0; i < vstr.size(); i++)
//	{
//		string s = vstr[i];
//		cout << s << endl;
//	}
//
//	return 0;
//}