//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int numCount[3][10] = { 0, };
//int rst[3] = { 0, };
//bool numberSt[3] = { 0, };
//
//bool check3Strike(vector<vector<int>> baseball, vector<int> combi)
//{
//	bool ok = true;
//
//	int strikeCnt = 0;
//	int ballCnt = 0;
//
//	for (int i = 0; i < baseball.size(); i++)
//	{
//		int tmpNum = baseball[i][0];
//		for (int j = 0; j < 3; j++)
//		{
//			int n = tmpNum % 10;
//
//			// strike check
//			if (n == combi[j])
//			{
//				strikeCnt++;
//			}
//
//			// ball check
//			for (int k = 0; k < 3; k++)
//			{
//				if (j == k)	continue;
//
//				if (n == combi[k])
//					ballCnt++;
//			}
//			
//			tmpNum /= 10;
//		}
//
//		if (baseball[i][1] < strikeCnt)	ok = false;
//		if (baseball[i][2] < ballCnt)	ok = false;
//		if (!ok)	break;
//
//		strikeCnt = 0;
//		ballCnt = 0;
//	}
//
//	return ok;
//}
//
//int combiNumber(vector<vector<int>> baseball, vector<int> combi, int row)
//{
//	int ret = 0;
//
//	if (baseball.size() == row)	return 0;
//
//	if (combi.size() == 3)
//	{
//		cout << "[COMBI] : ";
//		for (int i = 0; i < 3; i++)
//			cout << combi[i]<<" ";
//		cout << endl;
//		combi.pop_back();
//
//		//return 0;
//	}
//
//	int tmpNum = baseball[row][0];
//	for (int i = 0; i < 3; i++)
//	{
//		int n = tmpNum % 10;
//		combi.push_back(n);
//		combiNumber(baseball, combi, row + 1);
//		combi.pop_back();
//		tmpNum /= 10;
//	}
//
//	return ret;
//}
//
//int solution(vector<vector<int>> baseball) {
//	int answer = 0;
//	vector<int> v2;
//
//	answer = combiNumber(baseball, v2, 0);
//
//	return answer;
//}
//
//int main(void)
//{
//	vector<vector<int>> v;
//	vector<int> v2;
//
//	v.assign(4, vector<int>(3,0));
//
//	v[0][0] = 123;	v[0][1] = 1;	v[0][2] = 1;
//	v[1][0] = 356;	v[1][1] = 1;	v[1][2] = 0;
//	v[2][0] = 327;	v[2][1] = 2;	v[2][2] = 0;
//	v[3][0] = 489;	v[3][1] = 0;	v[3][2] = 1;
//
//	int rst = solution(v);
//
//	cout << rst;
//
//	return 0;
//}