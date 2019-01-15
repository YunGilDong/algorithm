//#include <string>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//#include <queue>
//
//using namespace std;
//
//bool check(queue<vector<int>> q, int prio, int loc)
//{
//	bool ok = false;
//	vector<int> v;
//	cout << "check("<<q.size()<<") : " << prio << ", " << endl;
//
//	while (q.size() != 0)
//	{
//		vector<int> v = q.front();
//
//		cout << v[0] << endl;
//		if (v[0] > prio)
//		{
//			cout << "true" << v[0] << endl;
//			ok = true;
//			break;
//		}
//		q.pop();
//	}
//
//
//	return ok;
//}
//
//void quePrint(queue<vector<int>> q)
//{
//	while (q.size() != 0)
//	{
//		vector<int> v2 = q.front();
//		q.pop();
//	}
//}
//
//int solution(vector<int> priorities, int location) {
//	int answer = 0;
//	queue<vector<int>> que;
//	vector<int> v;	
//
//	for (int i = 0; i < priorities.size(); i++)
//	{
//		v.push_back(priorities[i]);
//		v.push_back(i);
//
//		que.push(v);
//		v.clear();
//	}
//	
//	while (true && que.size()!=0)
//	{
//		vector<int> v2 = que.front();
//		cout << "prio : " << v2[0] << ", " << "loc : " << v2[1] <<", "<< location<< endl;
//
//		// 현재 우선순위 보다 높은 우선순위가 있는지
//		if (check(que, v2[0], v2[1]))
//		{
//			que.pop();
//			que.push(v2);
//		}	
//		else
//		{
//			answer++;
//			if (v2[1] == location)
//			{
//				break;
//			}
//			que.pop();
//		}
//	}
//	return answer;
//}
//
//int main(void)
//{
//	//vector<int> v = { 2,1,3,2 };
//	vector<int> v = { 1,1,9,1,1,1 };
//	int ret = solution(v, 0);
//	cout << ret << endl;
//
//	return 0;
//}