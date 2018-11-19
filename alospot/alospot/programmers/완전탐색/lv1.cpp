//#include <iostream>
//#include <vector>
//
//#define max(a,b)	((a>b)?a:b)
//using namespace std;
//
//vector<int> v1 = { 1,2,3,4,5 };
//vector<int> v2 = { 2,1,2,3,2,4,2,5 };
//vector<int> v3 = { 3,3,1,1,2,2,4,4,5,5 };
//
//vector<int> solution(vector<int> answers) {
//	vector<int> answer;
//	int rst1 = 0, v1Idx = 0;
//	int rst2 = 0, v2Idx = 0;
//	int rst3 = 0, v3Idx = 0;
//	int maxVal = 0;
//
//	for (int i = 0; i < answers.size(); i++)
//	{
//		if (i % 5 == 0)		v1Idx = 0;
//		if (i % 8 == 0)		v2Idx = 0;
//		if (i % 10 == 0)	v3Idx = 0;
//
//		if (answers[i] == v1[v1Idx++])	rst1++;
//		if (answers[i] == v2[v2Idx++])	rst2++;
//		if (answers[i] == v3[v3Idx++])	rst3++;
//	}
//	maxVal = max(rst1, max(rst2, rst3));
//	if (rst1 == maxVal && maxVal != 0)	answer.push_back(1);
//	if (rst2 == maxVal && maxVal != 0)	answer.push_back(2);
//	if (rst3 == maxVal && maxVal != 0)	answer.push_back(3);
//
//	return answer;
//}
//
//int main(void)
//{
//	vector<int> v = { 1, 2, 3, 4, 5 };
//	//vector<int> v2 = { 1,3,2,4,2 };
//	//vector<int> v2 = { 1,2,3,4,5,1,2,4,1,2,4,1,2,4,1,2,4,1,2,4,1,2,4,1,2,4,1,2,4,1,2,4,1,2,4,1,2,4,1,2,4,1,2,4,1,2,4,1,1,2,3,1,2,3,2,1,4,1,2,1,2,4,1,2,4,1,2,4,1,2,4,1,2,4,1,2,4,1,2,4,3,1,2,4,4,5,4,2,1,2,3,2,1,3,2,1,2 ,1,2,3,1,2,4,1,1,2,3,1,2,3,2,1,4,1,2,3,1,2,4,4,5,4,2,1,2,3,2,1,3,2,1,2 ,1,2,3,1,2,4,1,1,2,3,1,2,3,2,1,4,1,2,3,1,2,4,4,5,4,2,1,2,3,2,1,3,2,1,2 };
//	vector<int> rst;
//
//	rst = solution(v);
//	cout <<"sz:"<< rst.size();
//	for (int i = 0; i < rst.size(); i++)
//	{
//		cout << "#" << rst[i] << " " << endl;
//	}
//	return 0;
//}