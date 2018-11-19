//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int solution(vector<int> food_times, long long k) {
//	int answer = 0;
//	int pos = 0;
//	bool isZero = false;
//
//	while(k>=0)
//	{		
//		if ((pos) == food_times.size()) {
//			if (isZero) {
//				cout << "size" << endl;
//				answer = -1;
//
//				break;
//			}
//			pos = 0;
//			isZero = true;
//		}
//
//		if (food_times[pos] == 0) {
//			pos++;
//			continue;
//		}
//
//		else
//		{
//			isZero = false;
//			food_times[pos] -= 1;
//			for (int j = 0; j < food_times.size(); j++)
//				cout << food_times[j] << " ";
//
//			pos++;
//			cout << "  " << pos << endl;
//			answer = pos;
//		}
//		k--;
//	}
//	return answer;
//}
//
//int main(void)
//{
//	//vector<int> tood_time = { 2,0,2,2,5,6,1,2,0 };
//	vector<int> tood_time = { 1,1,1 };
//
//	int rst = solution(tood_time, 3);
//	cout << rst << endl;
//	return 0;
//}