//#include <string>
//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//vector<int> solution(int brown, int red) {
//	vector<int> answer;
//
//
//	for (int i = 1; i<brown / 2; i++) {
//		int col = i;
//		int row = (brown + red) / i;
//
//		if ((col - 2)*(row - 2) == red) {
//			answer.push_back(row);
//			answer.push_back(col);
//			break;
//		}
//
//
//	}
//
//	return answer;
//}
//
//int main(void)
//{
//	int rst = 0;
//	vector<int> v;
//	v = solution(5000, 2000000);	// 100 * 100
//									//v = solution(50, 2450);
//									//v = solution(32, 4);
//									//v = solution(32, 13);
//	cout << v[0] << ", " << v[1] << endl;
//	v = solution(24, 24);
//	cout << endl;
//	cout << "asdf" << endl;
//	cout << v[0] << ", " << v[1] << endl;
//	return 0;
//}