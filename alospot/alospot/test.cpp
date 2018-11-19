//#include <iostream>
//
//using namespace std;
//int a;
//
//struct MSTA
//{
//	char ch;
//	int np;
//
//	MSTA()
//	{
//		cout << "MSTA CON" << endl;
//	}
//	virtual ~MSTA()
//	{
//		cout << "MSTA DIS CON" << endl;
//	}
//
//};
//
//struct AA : public MSTA
//{
//	char ch;
//	int np;
//
//	AA()
//	{
//		cout << "AA CON" << endl;
//	}
//	~AA()
//	{
//		cout << "AA DISCON" << endl;
//	}
//
//	int f1()
//	{
//		int n = 0;
//		return n;
//	}
//	int f2(int a)
//	{
//		int n = 0;
//		return n;
//	}
//	int f3(int a, int b)
//	{
//		int n = 0;
//		return n;
//	}
//
//};
//
//struct BB : public AA
//{
//	char ch;
//	int np;
//
//	BB()
//	{
//		cout << "BB CON" << endl;
//	}
//	~BB()
//	{
//		cout << "BB DISCON" << endl;
//	}
//
//	int f1()
//	{
//		int n = 0;
//		return n;
//	}
//	int f2(int a)
//	{
//		int n = 0;
//		return n;
//	}
//};
//
//int fun(int n)
//{
//	static int num=1;
//	cout <<"@@"<< num << endl;
//
//	if (n == 1000)
//	{
//		num = 1000;
//	}
//	return (n + num);
//}
//
//int main(void)
//{
//	MSTA *ma = new AA();
//	delete ma;
//
//	cout <<"-------------"<< endl;
//	AA *ma2 = new AA();
//	delete ma2;
//
//	cout <<"struct sz : "<< sizeof(BB) << endl;
//	return 0;
//}