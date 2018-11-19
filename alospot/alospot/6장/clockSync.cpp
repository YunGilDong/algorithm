//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//const int INF = 9999, SWITCHES = 10, CLOCKS = 16;
//const char linked[SWITCHES][CLOCKS + 1] = {
//	"xxx.............",
//	"...x...x.x.x....",
//	"....x.....x...xx",
//	"x...xxxx........",
//	"......xxx.x.x...",
//	"x.x...........xx",
//	"...x..........xx",
//	"....xx.x......xx",
//	".xxxxx..........",
//	"...xxx...x...x.."
//};
//
//bool areAligned(const vector<int>& clocks)
//{
//	bool isAligned = true;
//	for (int i = 0; i < CLOCKS; i++)
//	{
//		if (clocks[i] != 12)	isAligned = false;
//	}
//
//	return isAligned;
//}
//
//// swtch번 스위치를 누른다
//void push(vector<int>& clocks, int swtch)
//{
//	//cout << swtch << "  ";
//	for (int i = 0; i < 16; i++)
//	{
//		if (linked[swtch][i] == 'x')
//		{
//			clocks[i] += 3;
//			if (clocks[i] > 12)	clocks[i] = 3;
//		}
//	}
//}
//
//int solve(vector<int>& clocks, int swtch)
//{
//	if (swtch == SWITCHES)	return areAligned(clocks) ? 0 : INF;
//
//
//	int ret = INF;
//	int tmpRet = 0;
//	for (int cnt = 0; cnt < 4; cnt++)
//	{
//		ret = min(ret, cnt + solve(clocks, swtch + 1));
//		//cout << cnt << " ";
//		push(clocks, swtch);
//	}
//	return ret;
//}
//int main(void)
//{
//	vector<int> clocks(16);
//
//	int c;
//	cin >> c;
//	for (int i = 0; i < c; i++)
//	{
//		for (int j = 0; j < 16; j++)
//		{
//			cin >> clocks[j];
//		}
//		int ret = solve(clocks, 0);
//		ret = (ret == INF) ? -1 : ret;
//		cout << ret << endl;
//	}
//	
//	return 0;
//}