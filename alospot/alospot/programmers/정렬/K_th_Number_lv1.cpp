//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//vector<int> solution(vector<int> array, vector<vector<int>> commands) {
//	vector<int> answer;
//
//
//	for (int i = 0; i < commands.size(); i++)
//	{
//		vector<int> tmpV;
//		int st = commands[i][0];
//		int end = commands[i][1];
//		int target = commands[i][2];
//		for (int j = (st - 1); j < end; j++)
//		{
//			tmpV.push_back(array[j]);
//		}
//		sort(tmpV.begin(), tmpV.end());
//		answer.push_back(tmpV[(target - 1)]);
//		tmpV.clear();
//	}
//	return answer;
//}
//
//int main(void)
//{
//	vector<int> v = {1,5,2,6,3,7,4};
//	vector<vector<int>> v2;
//	v2.assign(3, vector<int>(3, 0));
//	v2[0][0] = 2;	v2[0][1] = 5;	v2[0][2] = 3;
//	v2[1][0] = 4;	v2[1][1] = 4;	v2[1][2] = 1;
//	v2[2][0] = 1;	v2[2][1] = 7;	v2[2][2] = 3;
//
//	vector<int> vv = solution(v, v2);
//	for (int i = 0; i < vv.size(); i++)
//	{
//		cout << vv[i] << " ";
//	}
//	cout << endl;
//	return 0;
//}
