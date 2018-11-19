//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//bool asc(int a, int b)
//{
//	return a < b;
//}
//
//int solution(vector<int> nums) {
//	int answer = 1;
//	int minN = 0;
//	int minNum = 0;
//	bool ok = true;
//
//	if (nums.size() < 2 && nums.size() > 100)
//		return 1;
//
//	sort(nums.begin(), nums.end(), asc);
//	minN = nums[0];
//	minNum = nums[nums.size() - 1] + 1;
//
//	for (int i = 1; i < minN; i++)	// 최소 숫자까지
//	{
//		ok = true;
//		for (int j = 0; j < nums.size(); j++)	// 배열 원소 순회
//		{
//			if (nums[j] % i != 0)
//			{
//				ok = false;
//				break;
//			}
//			
//		}
//		if (ok)
//		{
//			answer = i;
//			if (minNum > answer)
//			{
//				minNum = answer;
//			}
//		}
//	}
//	return answer;
//}
//
//int main(void)
//{
//	int rst = 0;
//	vector<int> v = { 10,20,15,30 };
//	rst=solution(v);
//	cout << rst << endl;
//
//	return 0;
//}