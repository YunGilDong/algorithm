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
//		if (m[i] == 'M' && f[i] == 'M')	// ��:�� �̸� pass
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
//	ó��° ��ʴ� �Լ� �ۿ��� ���� �˻��ؾ���. 
//	�Ķ���͸� erase(0,1)���� �ѱ�� ������.
//	*/
//	int ret = 0;
//	int tmpRet =0;
//	bool ok = true;
//	if (m.size() == 0)	return 0;
//	if (restFan.size() == 0)	return 0;
//	// �������
//	// ���� �Ҽ�, ��� ������
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