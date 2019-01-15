//#include <string>
//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//int solution(int bridge_length, int weight, vector<int> truck_weights) {
//	int answer = 1;
//	vector<int> bridge;
//	vector<int> kg;
//	int wg_sum = 0;
//	int len_sum = 0;
//	while (!(truck_weights.size() == 0 && bridge.size() == 0)) {
//		if (bridge.size() != 0) {
//			answer++;
//			for (int i = 0; i<bridge.size(); i++) {
//				bridge[i] = bridge[i] - 1;
//			}
//			if (bridge[0] <= 0) {
//				wg_sum = wg_sum - kg[0];
//				len_sum--;
//				bridge.erase(bridge.begin());
//				kg.erase(kg.begin());
//			}
//		}
//		if (truck_weights.size() != 0 && wg_sum + truck_weights[0] <= weight&&len_sum + 1 <= bridge_length) {
//			wg_sum = wg_sum + truck_weights[0];
//			len_sum++;
//			bridge.push_back(bridge_length);
//			kg.push_back(truck_weights[0]);
//			truck_weights.erase(truck_weights.begin());
//		}
//	}
//	return answer;
//}
//int main(void)
//{
//	//vector<int> tw = { 7,4,5,6 };
//	vector<int> tw = { 10,10,10,10,10,10,10,10,10,10 };
//
//	//int ret = solution(2, 10, tw);
//	int ret = solution(100, 100, tw);
//	cout <<"ret : "<< ret << endl;;
//	return 0;
//}