//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//bool asc(string a, string b)
//{
//	return a < b;
//}
//
//bool wildcard2(string w, string f)
//{
//	int pos = 0;
//
//	//cout << "[1]  wild : " << w << ", fileNm : " << f << endl;
//
//	while ((pos < w.size() && pos < f.size()) && 
//		 (w[pos] == '?' || w[pos] == f[pos]))
//		pos++;
//
//	if (pos == w.size())
//	{
//		////cout << "[2]  wild : " << w << ", fileNm : " << f << endl;
//		//if (pos == f.size())
//		//{
//		//	//cout << "[3]  wild : " << w << ", fileNm : " << f << endl;
//		//	return true;
//		//}
//		return pos == f.size();
//	}
//
//	if (w[pos] == '*')
//	{
//		for (int i = 0; i + pos <= f.size(); i++)
//		{
//			//cout << "[5]  wild : " << w.substr(pos + 1) << ", fileNm : " << f.substr(pos + i) << endl;
//			if (wildcard2(w.substr(pos + 1), f.substr(pos + i)))
//			{
//				//cout << "[4]  wild : " << w.substr(pos + 1) << ", fileNm : " << f.substr(pos + i) << endl;
//				//cout << "[4]  wild : " << w << ", fileNm : " << f << endl;
//				return true;
//			}
//		}
//	}
//
//	return false;
//}
//
//bool wildcard(string wildStr, string fileNm)
//{
//	bool ret = true;
//
//	cout << "wild : " << wildStr << ", fileNm : " << fileNm << endl;
//	if (fileNm.size() == 0)	return true;
//
//	char wildCh = wildStr[0];
//	char fileCh;
//
//	// ?
//	if (wildCh == '?')
//	{
//		cout << "[1]" << endl;
//		if (fileNm.size() > 0)
//		{
//			cout << "[2]" << endl;
//			fileCh = fileNm[0];
//			ret = wildcard(wildStr.erase(0, 1), fileNm.erase(0, 1));
//		}
//		else
//			ret = false;
//	}
//
//	// *
//	else if (wildCh == '*')
//	{
//		cout << "[3]" << endl;
//		char wildNextCh;
//		if (wildStr.size() > 1)
//		{
//			wildNextCh = wildStr[1];
//			for (int i = 0; i < fileNm.size(); i++)
//			{
//				if (wildNextCh == fileNm[i])
//				{
//					cout << "[5]" << ", " << wildNextCh << ", " << fileNm[i] << endl;
//					ret = wildcard(wildStr.erase(0, 2), fileNm.erase(0, 1+i));
//					break;
//				}
//				else
//				{
//					cout << "[4]" <<", "<<wildNextCh<<", "<<fileNm[i]<< endl;
//					//fileNm.erase(0, 1);
//					ret = false;
//				}
//			}
//		}
//		else if (wildStr.size() == 1)	// *만 남아있는 경우
//		{
//			cout << "[6]" << endl;
//			ret = true;
//		}
//	}
//	else if (wildCh == fileNm[0])	//문자 끼리 비교
//	{
//		cout << "[7]" << endl;
//		ret = wildcard(wildStr.erase(0, 1), fileNm.erase(0, 1));
//	}
//	else
//	{
//		cout << "[8]" << endl;
//		ret = false;
//	}
//
//	return ret;
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
//			fileNmStr[j] = "";
//
//			getline(cin, fileNmStr[j]);
//
//			if (wildcard2(wildStr, fileNmStr[j]))
//			{
//				vstr.push_back(fileNmStr[j]);
//				//cout << "true : " <<fileNmStr<< endl;
//			}
//			//else
//				//cout << "false : " << fileNmStr<< endl;
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