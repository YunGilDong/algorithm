//#include <string>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//#include <map>
//
//using namespace std;
//
//bool asc(string a, string b)
//{
//	return a.length() < b.length();
//}
//
//bool solution(vector<string> phone_book) {
//	bool answer = true;
//
//	sort(phone_book.begin(), phone_book.end(), asc);
//	for (auto elem : phone_book)
//	{
//		cout << elem << " ";
//	}
//	cout << endl;
//	
//	for (int i = 0; i < phone_book.size(); i++)
//	{
//		int len = phone_book[i].length();
//		cout <<"[ * ]"<< phone_book[i] << endl;
//		for (int j = i + 1; j < phone_book.size(); j++)
//		{
//			string str = phone_book[j].substr(0, len);
//			cout << str << endl;
//			if (phone_book[i] == str)
//			{
//				cout << "[1]";
//				answer = false;
//				break;
//			}
//		}
//		if (!answer)	break;
//	}
//
//	return answer;
//}
//
//int main(void)
//{
//	vector<string> v = { "119", "97674223", "1195524421" };
//	bool ok = solution(v);
//	cout << ok << endl;
//	return 0;
//}