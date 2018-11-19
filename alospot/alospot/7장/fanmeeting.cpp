//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//bool compareMember_Fan(string m, string f)
//{
//	bool ok = true;
//	if (m.size() > f.size())	return false;
//
//	for (int i = 0; i < m.size(); i++)
//	{
//		if (m[i] == 'M' && f[i] == 'M')	// 남:남 이면 pass
//		{
//			ok = false;
//			break;
//		}
//	}
//	return ok;
//}
//
//int solve(string m, string restFan)
//{
//	/*
//	처번째 사례는 함수 밖에서 따로 검사해야함. 
//	파라미터를 erase(0,1)부터 넘기기 때문에.
//	*/
//	int ret = 0;
//	int tmpRet =0;
//	bool ok = true;
//	if (m.size() == 0)	return 0;
//	if (restFan.size() == 0)	return 0;
//	// 기저사례
//	// 남은 팬수, 멤버 같을떄
//	if (restFan.size() == m.size())
//	{
//		return 0;
//	}
//	
//	ret += solve(m, restFan.erase(0, 1));
//
//	if (compareMember_Fan(m, restFan))
//	{
//		ret += 1;
//	}
//	
//	return ret;
//}
//
//int main(void)
//{
//	int c;
//	string s1, s2;
//
//	cin >> c;
//	for (int i = 0; i < c; i++)
//	{
//		cin >> s1;
//		cin >> s2;
//
//		int rst = solve(s1, s2);
//		if (compareMember_Fan(s1, s2))
//		{
//			rst += 1;
//		}
//
//		cout << rst << endl;
//		s1 = ""; s2 = "";
//	}
//
//	return 0;
//}