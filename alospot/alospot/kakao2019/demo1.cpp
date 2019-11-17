//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<int> solution(vector<vector<int> > v) {
//	vector<int> ans;
//	int x = 0, y = 0;
//
//	if (v[0][0] == v[1][0])
//	{
//		x = v[2][0];
//	}
//	else if ((v[1][0] == v[2][0]))
//	{
//		x = v[0][0];
//	}
//	else
//	{
//		x = v[1][0];
//	}
//
//	if (v[0][1] == v[1][1])
//	{
//		y = v[2][1];
//	}
//	else if ((v[1][1] == v[2][1]))
//	{
//		y = v[0][1];
//	}
//	else
//	{
//		y = v[1][1];
//	}
//	ans.push_back(x);
//	ans.push_back(y);
//	cout << x << "," << y << endl;
//
//	return ans;
//}
//
//int main(void)
//{
//	vector<vector<int> > v = {
//		{1,4},
//		{3,4},
//		{3,10}
//	};
//	solution(v);
//	return 0;
//}