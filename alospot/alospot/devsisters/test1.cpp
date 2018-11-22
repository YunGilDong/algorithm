//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//vector<int> solution(vector<vector<int> > v)
//{
//	int x1 = 0;
//	int x2 = 0;
//	int y1 = 0;
//	int y2 = 0;
//	vector<int> ans;
//
//	// x
//	x1 = v[0][1];
//	x2 = v[1][1];
//	if (x1 == v[2][1])	ans.push_back(x2);
//	else				ans.push_back(x1);
//	cout << ans[0] <<x1<<","<<x2<< endl;
//	// y
//	y1 = v[0][0];
//	y2 = v[1][0];
//	if (y1 == v[2][0])	ans.push_back(y2);
//	else				ans.push_back(y1);
//		
//	cout << ans[1] << y1 << "," << y2 << endl;
//	return ans;
//}
//
//int main(void)
//{
//	vector<vector<int>> v;
//	vector<int> ret(2);
//
//	v.assign(3, vector<int>(2, 0));
//
//	v[0][0] = 6;	v[0][1] = 4;
//	v[1][0] = 3;	v[1][1] = 11;
//	v[2][0] = 3;	v[2][1] = 4;
//
//	
//	ret = solution(v);
//	cout << ret[0] << ", " << ret[1] << endl;
//
//	return 0;
//}