//#include <iostream>
//#include <vector>
//#include <string>
//
//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<int> solution(vector<int> heights) {
//	vector<int> answer(heights.size());
//	int idx = heights.size() - 1;
//	for (; idx >= 0; --idx)
//	{
//		answer[idx] = 0;
//		for (int i = (idx - 1); i >= 0; --i)
//		{
//			if (heights[idx] < heights[i])
//			{
//				answer[idx] = i+1;
//				break;
//			}
//		}
//	}
//
//	return answer;
//}
//
//int main(void)
//{
//	//vector<int> h = {6,9,5,7,4};
//	vector<int> h = { 3,9,9,3,5,7,2 };
//
//	solution(h);
//	cout << "hi~" << endl;
//	return 0;
//}