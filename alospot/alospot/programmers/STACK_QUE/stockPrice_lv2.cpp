//#include <string>
//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//vector<int> solution(vector<int> prices) {
//	vector<int> answer;
//	int count = 0;
//	for (int i = 0; i < prices.size(); i++)
//	{
//		count = 0;
//		for (int j = i + 1; j < prices.size(); j++)
//		{
//			if (prices[i] <= prices[j])
//			{
//				count++;
//			}
//			else
//			{
//				count++;
//				break;
//			}
//		}
//		answer.push_back(count);
//	}
//
//	return answer;
//}
//
//int main(void)
//{
//	vector<int> p = { 498, 501, 470, 489 };
//	vector<int> v = solution(p);
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << v[i] << ", ";
//	}
//	cout << endl;
//
//	return 0;
//}