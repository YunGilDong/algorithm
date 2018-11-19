//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//void normalize(vector<int>& num)
//{
//	num.push_back(0);
//
//	for (int i = 0; i < num.size(); i++) {
//		if (num[i] < 0) {
//			int borrow = (abs(num[i]) + 9) / 10;
//			num[i + 1] -= borrow;
//			num[i] += borrow * 10;
//		}
//		else
//		{
//			num[i + 1] += num[i] / 10;
//			num[i] %= 10;
//		}
//	}
//	while (num.size() > 1 && num.back() == 0)	num.pop_back();
//}
//
//vector<int> SetNumber(long long a)
//{
//	vector<int> va;
//
//	// %10  and / 10
//	while (a > 0)
//	{
//		int n = a % 10;
//		va.push_back(n);
//		a /= 10;
//	}
//	return va;
//}
//
//long long solution(long long a, long long b)
//{
//	long long answer = 0;
//	vector<int> va;
//	vector<int> tmpVa;
//	vector<int> vb;
//
//	vector<int>::iterator vaIt;
//	vector<int>::iterator vRstIt;
//
//	vaIt = va.begin();
//	va = SetNumber(a);
//	vb = SetNumber(a);
//	vector<int> vrst(3, 0);
//	vRstIt = vrst.begin();
//
//	b -= 1;
//	if (b < 1) answer = 1;
//
//	for (long long i = 0; i < b; i++)
//	{
//		vrst.clear();
//		vrst.resize(va.size() + vb.size() + 1, 0);
//
//		for (int x = 0; x < va.size(); x++)
//		{
//			for (int y = 0; y < vb.size(); y++)
//			{
//				vrst[x + y] += va[x] * vb[y];
//			}
//		}
//
//		normalize(vrst);
//		va.clear();
//		vaIt = va.begin();
//
//		for (int i = 0; i < vrst.size(); i++)
//		{
//			va.push_back(vrst[i]);
//		}
//	}
//	vector<int> vAns;
//	for (int i = 0; i < vrst.size(); i++)
//	{
//		//cout << vrst[i] << " ";
//		if (i < 5)
//			vAns.push_back(vrst[i]);
//	}
//
//	// long rst ±¸ÇÏ±â
//	int mul = 1;
//	long long rst = 0;
//	for (int i = 0; i < vAns.size(); i++)
//	{
//
//		//if (vAns[i] == 0)	continue;
//		if (vAns[i] == (vAns.size()))	continue;
//		rst += (vAns[i] * mul);
//		mul *= 10;
//	}
//
//	answer = rst;
//	return answer;
//}
//
//int main(void)
//{
//	long long rst = -1;
//
//	//case 1 : 2^26	 rst : 8864
//	rst = solution(1234, 12345);
//	cout << endl;
//	cout << rst << endl;
//
//	//case 2 : 10^3	 rst : 1000
//	rst = solution(10, 3);
//	cout << endl;
//	cout << rst << endl;
//
//	//case 3 : 10^6	 rst : 0
//	rst = solution(10, 6);
//	cout << endl;
//	cout << rst << endl;
//	return 0;
//}