//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int dfs(vector<int> numbers, int target, int rst)
//{
//	int ret = 0;
//
//	// 기저사례 : number가 없는 경우
//	if (numbers.size() == 0)
//	{
//		if (target == rst)	return 1;
//		else
//			return 0;
//	}
//
//	int n = numbers[0];
//	numbers.erase(numbers.begin() + 0);
//	return ret += ((dfs(numbers , target, rst + n)) + (dfs(numbers, target, rst - n)));
//	
//	return ret;
//}
//
//int solution(vector<int> numbers, int target) {
//	int answer = 0;
//	int rst = 0;
//	answer = dfs(numbers, target, rst);
//	return answer;
//}
//
//int main(void)
//{
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(1);
//	v.push_back(1);
//	v.push_back(1);
//	v.push_back(1);
//
//	int ret = solution(v, 3);
//	cout << ret << endl;
//	return 0;
//}