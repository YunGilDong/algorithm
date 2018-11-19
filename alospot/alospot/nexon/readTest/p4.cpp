//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int bestTrio(int friends_nodes, vector<int> friends_from, vector<int> friends_to) {
//	int score=10000;
//	bool isTrio = false;
//	
//	vector<vector<int> > friendMap;
//	friendMap.assign((friends_nodes), vector<int>((friends_nodes), 0));
//
//	
//	for (int i = 0; i < friends_from.size(); i++)
//	{
//			
//		cout << friends_from[i] << " " << friends_to[i] << endl;
//		friendMap[friends_from[i]-1][friends_to[i]-1] = 1;
//		friendMap[friends_to[i]-1][friends_from[i]-1] = 1;
//	}
//	
//
//	for (int i = 0; i < friends_nodes; i++)
//	{
//		for (int j = 0; j < friends_nodes; j++)
//		{
//			
//			cout << friendMap[i][j] << " ";
//		}
//		cout << endl;
//	}
//	
//	cout << endl << endl;
//
//	int trio = 0;
//	int frientCnt=0;
//	int trioCnt = 0;
//	int tmpScore = 0;
//	for (int i = 0; i < friends_nodes; i++)
//	{
//		for (int j = i; j < friends_nodes; j++)
//		{
//			if (trioCnt == 3)
//			{
//				isTrio = true;
//				if (score > tmpScore)
//					score = tmpScore;
//				break;
//			}
//
//			//친구수 세기
//			for (int k = 0; k < friends_nodes; k++)
//			{
//				if (friendMap[j][k] == 1)
//				{
//					frientCnt++;
//				}
//			}
//			
//			if (frientCnt >= 2)
//			{
//				trioCnt++;			
//				tmpScore += (frientCnt - 2);
//			}
//			frientCnt = 0;
//		}
//		
//		trioCnt = 0;
//		tmpScore = 0;
//	}
//	if (!isTrio)	return -1;
//	return score;
//}
//
//
//int main(void)
//{
//
//	vector<int>friends_from;
//	vector<int>friends_to;
//
//	friends_from.push_back(1);
//	friends_from.push_back(2);
//	//friends_from.push_back(5);
//	//friends_from.push_back(1);
//	//friends_from.push_back(3);
//	//friends_from.push_back(4);
//
//
//	friends_to.push_back(2);
//	friends_to.push_back(3);
//	//friends_to.push_back(1);
//	//friends_to.push_back(7);
//	//friends_to.push_back(4);
//	//friends_to.push_back(5);
//
//
//	cout<<bestTrio(3, friends_from, friends_to);
//
//	return 0;
//}