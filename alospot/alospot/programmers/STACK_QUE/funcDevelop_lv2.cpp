//#include <string>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//#include <cmath>
//
//using namespace std;
//
//vector<int> solution(vector<int> progresses, vector<int> speeds) {
//	vector<int> answer;
//	vector<int> vDay;
//
//	for (int i = 0; i < progresses.size(); i++)
//	{
//		int rest = 100 - progresses[i];
//		double d = (double)rest / speeds[i];
//		int day = ceil(d);
//		vDay.push_back(day);
//	}
//
//	int pivot = vDay[0];
//	int n = 1;
//	bool isPush = false;
//	for (int i = 1; i < vDay.size(); i++)
//	{
//		if (pivot >= vDay[i])
//		{
//			n++;
//			isPush = false;
//		}
//		else
//		{
//			isPush = true;
//			answer.push_back(n);
//			pivot = vDay[i];
//			n = 1;
//		}
//	}
//	if (!isPush || n==1)
//	{
//		answer.push_back(n);
//	}
//
//	return answer;
//}
//
//int main(void)
//{
//	vector<int> prog = { 93, 30, 55 };
//	vector<int> spd = { 1, 30, 5 };
//	vector<int> v;
//	v = solution(prog, spd);
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << v[i] << ", ";
//	}
//	return 0;
//}