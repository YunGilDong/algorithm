//#include <iostream>
//#include <vector>
//#include <memory>
//
//using namespace std;
//
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
//};
//int AA::cnt = 0;
//class BB : public AA
//{
//public:
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
//	void show()
//	{
//		cout << cnt << endl;
//		cout << "BB mycnt : " << mycnt << endl;
//	}
//	void f1(int a = 1, int b = 2, int c = 3)
//	{
//		cout << a << "," << b << ", " << c << endl;
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
//static AA staa11;
//AA a;
//static AA staa;
//
//int main()
//{
//	 
//	static AA sa;
//
//	AA aaa;
//
//	/*aaa.show();
//	a.show();
//	sa.show();
//	staa.show(); 
//	staa11.show();*/
//
//	int n = 10;
//	int n2 = 20;
//
//	int & rn = n;
//	//rn = n2;
//
//	rn = 2;
//	cout << rn << "," << n << endl;
//
//	/*AA* ptrB = new BB();
//	delete ptrB;
//
//	cout << "----------------" << endl;
//	BB* ptrB2 = new BB();
//	delete ptrB2;*/
//
//	AA* ptrB = new BB();
//	ptrB->show();
//	delete ptrB;
//
//	cout << "----------------" << endl;
//	cout << "----------------" << endl;
//	cout << "----------------" << endl;
//
//	shared_ptr<BB> myBB(new BB());
//	//myBB->f1(10);
//	//myBB->f1(10,20);
//	//myBB->f1(10,20,30);
//
//	//cout << static_cast<int>(MyEnum::EnumVal) << endl;
//	//cout << static_cast<int>(MyEnum::EnumVal2) << endl;
//	//cout << static_cast<int>(MyEnum::EnumVal3) << endl;
//	//cout << sizeof(CC) << endl;
//
//
//	CC cel[3];
//
//	return 0;
//}