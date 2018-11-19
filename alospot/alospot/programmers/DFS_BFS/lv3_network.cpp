//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<int> a[10];
//int comVisit[200] = { 0, };
//
//int dfs(int n, vector<vector<int>> computers, int nodeIdx) {
//	int answer = 0;
//	int nextNode = -1;
//
//	comVisit[nodeIdx] = 1;
//	// visit배열을 참조하여 다음 검색할 노드 서치
//	for (int i = 0; i < n; i++)
//	{
//		if (nodeIdx == i)	continue;
//		if (comVisit[i] == 1)	continue;
//		if (computers[nodeIdx][i] == 1)
//		{
//			nextNode = i;
//			//comVisit[nextNode] = 1;
//			//comVisit[nodeIdx] = 1;
//			cout << nodeIdx << ", " << nextNode << endl;
//			answer = dfs(n, computers, nextNode);	
//		}
//	}
//
//	// 기저사례 (방문 가능한 노드가 없을 경우)
//	if (nextNode == -1)	return 1;
//	
//	return answer;
//}
//
//int solution(int n, vector<vector<int>> computers) {
//	int answer = 0;
//
//	for (int i = 0; i < n; i++)
//	{
//		if (comVisit[i] == 0)
//		{
//			cout << "[root node] : " << i << endl;
//			answer+=dfs(n, computers, i);
//			cout << "----------------------------------------" << endl;
//		}
//	}
//
//	return answer;
//}
//
//int main(void)
//{
//	vector<vector<int>> c;
//	c.assign(3, vector<int>(3, 0));
//	vector<vector<int>> c2;
//	c2.assign(3, vector<int>(3, 0));
//
//	c[0][0] = 1;
//	c[0][1] = 1;
//	c[0][2] = 0;
//
//	c[1][0] = 1;
//	c[1][1] = 1;
//	c[1][2] = 0;
//
//	c[2][0] = 0;
//	c[2][1] = 0;
//	c[2][2] = 1;
////--------------------------
//	c2[0][0] = 1;
//	c2[0][1] = 1;
//	c2[0][2] = 0;
//
//	c2[1][0] = 1;
//	c2[1][1] = 1;
//	c2[1][2] = 1;
//
//	c2[2][0] = 0;
//	c2[2][1] = 1;
//	c2[2][2] = 1;
//
//	int rst = solution(3, c);
//	cout << rst << endl;
//
//	return 0;
//}