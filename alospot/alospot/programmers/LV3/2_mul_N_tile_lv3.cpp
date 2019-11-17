//#include <string>
//#include <vector>
//#include <math.h>
//#include <iostream>
//
//using namespace std;
//
//
//int solution(int n) {
//	int answer = 0;
//	int n1 = 1;
//	int n2 = 2;
//
//	if (n == n1)
//		return 1;
//	if (n == n2)
//		return 2;
//
//	int ni = 0;
//	for (int i = 3; i <= n; i++)
//	{
//		ni = (n2 + n1) % 1000000007;
//		n1 = n2;
//		n2 = ni;
//	}
//	answer = ni;
//	return answer;
//}
//
//int main(void)
//{
//	cout << solution(1) << endl;
//	cout << solution(2) << endl;
//	cout << solution(3) << endl;
//	cout << solution(4) << endl;
//	cout << solution(5) << endl;
//	cout << solution(6) << endl;
//	cout << solution(7) << endl;
//	cout << solution(8) << endl;
//	return 0;
//}