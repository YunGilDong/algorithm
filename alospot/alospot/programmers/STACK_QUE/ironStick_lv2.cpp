//#include <string>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int solution(string arrangement) {
//	int answer = 0;
//	vector<int> v;
//	int num = 0;
//	int len = arrangement.size();
//	vector<int>::iterator it;
//
//	for (int i = 0; i < len; i++)
//	{
//		if (arrangement[i] == '(')
//		{
//			v.push_back(num);
//			num++;
//		}
//		else
//		{
//			it = v.end();	it--;
//			num = *it;
//			if (arrangement[i - 1] == ')')
//				answer += 1;
//			else
//				answer += num;
//			v.pop_back();
//		}
//	}
//	return answer;
//}
//
//int main(void)
//{
//	string s = "()(((()())(())()))(())";
//	//string s = "()()()()()()()()()()()(())";
//	//string s = "(())";
//
//	int ret = solution(s);
//	cout << ret << endl;
//	return 0;
//}