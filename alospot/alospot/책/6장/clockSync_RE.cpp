////#include <iostream>
////#include <vector>
////
////using namespace std;
////
////#define min(a,b)	((a>b)?b:a)
////#define inf 99999
////
////
////
////int clocklinked[10][16] = {
////	//0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5
////	{ 1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0 },
////	{ 0,0,0,1,0,0,0,1,0,1,0,1,0,0,0,0 },
////	{ 0,0,0,0,1,0,0,0,0,0,1,0,0,0,1,1 },
////	{ 1,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0 },
////	{ 0,0,0,0,0,0,1,1,1,0,1,0,1,0,0,0 },
////	{ 1,0,1,0,0,0,0,0,0,0,0,0,0,0,1,1 },
////	{ 0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,1 },
////	{ 0,0,0,0,1,1,0,1,0,0,0,0,0,0,1,1 },
////	{ 0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0 },
////	{ 0,0,0,1,1,1,0,0,0,1,0,0,0,1,0,0 }
////};
////void printswitches(vector<int>& swtchs)
////{
////	//if (swtchs.size() != 2)	return;
////
////	for (int i = 0; i < swtchs.size(); i++)
////	{
////		cout << swtchs[i] << " ";
////	}
////	cout << endl;
////	//swtchs.clear();
////	cout << "-------------------------------------------" << endl;
////}
////
////void printsw(vector<vector<int>> &sw)
////{
////	for (int i = 0; i < 10; i++)
////	{
////		for (int j = 0; j < 1; j++)
////		{
////			cout << sw[i][j] << " ";
////		}
////		//cout << endl;
////	}
////	cout << endl;
////}
////
////void printswzere(vector<vector<int>> &sw)
////{
////	for (int i = 0; i < 10; i++)
////	{
////		for (int j = 0; j < 1; j++)
////		{
////			sw[i][j] = 0;
////		}
////	}
////}
////
////bool is12aclock(vector<int>&clocks)
////{
////	bool ok = true;
////	for (int i = 0; i < 16; i++)
////	{
////		if (clocks[i] != 12) {
////			ok = false;
////			break;
////		}
////	}
////	return ok;
////}
////
////void pushswitch(vector<int> &clocks, int swtchnum)
////{
////	for (int i = 0; i < 16; i++)
////	{
////		if (clocklinked[swtchnum][i] == 1)
////		{
////			clocks[i] += 3;
////			if (clocks[i] > 12)	
////				clocks[i] = 3;
////		}
////	}
////}
////
//int clocksync(vector<int>& clocks, vector<int>& swtchs, int swtch, vector<vector<int> >& sw)
//{
//	int ret = inf;
//	int tmpret=inf;
//	if (swtch == 10) {
//		if (is12aclock(clocks))
//		{
//			printsw(sw);
//			//printswitches(swtchs);
//			//swtchs.clear();
//			//printswzere(sw);
//			return 0;
//		}
//		else
//		{
//			//printswzere(sw);
//			//swtchs.clear();
//			return inf;
//		}
//	}
//	int cnt = 0;
//	for (cnt = 0; cnt < 4; cnt++)
//	{
//		sw[swtch][0] = cnt;
//
//		tmpret = min(ret,cnt+clocksync(clocks, swtchs, swtch + 1, sw));
//		ret = min(ret, tmpret);		
//
//		pushswitch(clocks, swtch);	
//		
//	}
//	return ret;
//}
////
////int main(void)
////{
////
////	int tm;
////	int ret = 0;
////	//int sw[10][4] = { 0, };
////	vector<vector<int> > sw;
////	sw.assign(10, vector<int>(4, 0));
////	
////	vector<int> clocks(16);
////	vector<int> swtchs;
////	for (int i = 0; i < 16; i++)
////	{
////		cin >> clocks[i];
////	}
////
////	ret=clocksync(clocks, swtchs, 0, sw);
////	if (ret == inf)
////		cout << -1;
////	else
////		cout << ret << endl;
////
////	return 0;
////}