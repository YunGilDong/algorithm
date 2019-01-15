//#include <iostream>
//#include <string>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//int solution(int bridge_length, int weight, vector<int> truck_weights) {
//	int answer = 1;
//	queue<int> readyQ;
//	queue<int> bridgeQ;
//
//	for (int i = 0; i < truck_weights.size(); i++)
//		readyQ.push(truck_weights[i]); 
//
//	int totalW = readyQ.front();
//	readyQ.pop();
//	bridgeQ.push(totalW);
//	int trW = 0;
//	int headPos = 1;
//
//	while (true)
//	{
//		if (totalW == 0)	break;
//		if (headPos == bridge_length)
//		{
//			// POP & push
//			int fTrW = bridgeQ.front();
//			bridgeQ.pop();
//			totalW -= fTrW;
//			headPos--;
//			if (readyQ.size() != 0)
//			{
//				trW = readyQ.front();
//				if ((totalW + trW) <= weight)
//				{
//					bridgeQ.push(trW);
//					totalW += trW;
//					readyQ.pop();
//				}
//				else
//				{
//					bridgeQ.push(0);
//				}
//			}
//		}
//		else
//		{
//			// push
//			if (readyQ.size() != 0)
//			{
//				trW = readyQ.front();
//				if ((totalW + trW) <= weight)
//				{
//					bridgeQ.push(trW);
//					totalW += trW;
//					readyQ.pop();
//				}
//				else
//				{
//					bridgeQ.push(0);
//				}
//			}
//		}
//		headPos++;
//		answer++;
//
//	}
//	return answer;
//}
//
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