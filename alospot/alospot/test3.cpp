//#include <iostream>
//#include <vector>
//#include <memory>
//#include <bitset>
//
//using namespace std;
//
//class DD
//{
//public:
//	int a;
//
//	DD()
//	{
//		cout << "DD CON" << endl;
//	}
//	~DD()
//	{
//		cout << "DD DIS CON" << endl;
//	}
//};
//
//class CC
//{
//public:
//
//	int c = 10;
//	int a;
//	int d;
//	int c1;
//	int dd1;
//
//
//	CC()
//	{
//		cout << "CC CON" << endl;
//	}
//	virtual ~CC()
//	{
//		cout << "CC DIS CON" << endl;
//	}
//
//	void f1()
//	{
//		cout << "f1" << endl;
//	}
//	void f2() const
//	{
//		cout << "f2 const" << endl;
//	}
//};
//
//class AA
//{
//protected:
//
//public:
//	DD da;
//	static int cnt;
//	int mycnt;
//	AA()
//	{
//		mycnt = cnt++;
//		cout << "AA CON" << endl;
//	}
//	virtual ~AA()
//	{
//		cout << "AA DIS CON" << endl;
//	}
//	virtual void show() //final
//	{
//		cout << cnt << endl;
//		cout << "AA mycnt : " << mycnt << endl;
//	}
//	virtual void show(int a) //final
//	{
//		cout << cnt << endl;
//		cout << "AA2 mycnt : " << mycnt << endl;
//	}
//	virtual void go(int i = 2)
//	{
//		cout << "super's go " << i << endl;
//	}
//};
//int AA::cnt = 0;
//class BB : public AA
//{
//public:
//	CC ca;
//	BB()
//	{
//		cout << "BB CON" << endl;
//	}
//	BB(const CC ccc)
//	{
//		ccc.f2();
//	}
//	~BB()
//	{
//		cout << "BB DIS CON" << endl;
//	}
//	//using AA::show;
//	void show()
//	{
//		cout << cnt << endl;
//		cout << "BB mycnt : " << mycnt << endl;
//	}
//	void f1(int a = 1, int b = 2, int c = 3)
//	{
//		cout << a << "," << b << ", " << c << endl;
//	}
//	virtual void go(int i = 7)
//	{
//		cout << "sub's go " << i << endl;
//	}
//};
//
//
//enum class MyEnum
//{
//	EnumVal,
//	EnumVal2,
//	EnumVal3
//};
//
//int swap(int &a, int&b)
//{
//	int n;
//	return 0;
//}
//
//int main()
//{
//	//AA myA;
//	//BB myB;
//	//AA& rfA = myB;
//
//	//myA.go();
//	//myB.go();
//	//rfA.go();
//
//	////swap(1, 2);
//
//	//int* intP;
//	//int*& ptrRef = intP;
//	//ptrRef = new int;
//	//*ptrRef = 5;
//	//cout <<"ptr:"<< *ptrRef << endl;
//
//	//int x = 3;
//	//int& xRef = x;
//	//int* xPtr = &xRef;
//	//*xPtr = 100;
//	//cout << "addr : " << &xRef << ", " << xPtr << endl;
//	//cout << "val : " << x << ", " << *xPtr << endl;
//
//	//AA* ptrA = new AA();
//
//	//BB* sub = static_cast<BB*>(ptrA);
//	//BB* sub2 = dynamic_cast<BB*>(ptrA);
//
//	//const_cast<AA*>(ptrA);
//	//CC *ptrC = new CC();
//	//DD *ptrD = new DD();
//
//	//ptrC = reinterpret_cast<CC*>(ptrD);
//	//sub = static_cast<BB*>(ptrA);
//
//
//	auto str1 = "0011001100";
//	auto str2 = "0000111100";
//	bitset<10> bitsOne(str1);
//	bitset<10> bitsTwo(str2);
//
//	auto bitsTr = bitsOne & bitsTwo;
//	cout << bitsTr<<endl;
//	bitsTr <<= 8;
//	cout << bitsTr << endl;
//
//
//
//	return 0;
//}