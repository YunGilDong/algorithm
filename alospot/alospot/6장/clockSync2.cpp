//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//const int INF = 999999999, SWITCHES = 10, CLOCKS = 16;
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
//int solve(vector<int> clocks, int swtch)
//{
//	int ret = INF;
//	int tmpRet = 0;
//	int cnt = 0;
//
//	for (int a1 = 0; a1 < 4; a1++)
//	{
//		for (int a2 = 0; a2< 4; a2++)
//		{
//			for (int a3 = 0; a3 < 4; a3++)
//			{
//				for (int a4 = 0; a4 < 4; a4++)
//				{
//					for (int a5 = 0; a5 < 4; a5++)
//					{
//						for (int a6 = 0; a6 < 4; a6++)
//						{
//							for (int a7 = 0; a7 < 4; a7++)
//							{
//								for (int a8 = 0; a8 < 4; a8++)
//								{
//									for (int a9 = 0; a9 < 4; a9++)
//									{
//										for (int a10 = 0; a10 < 4; a10++)
//										{										
//											if (areAligned(clocks))
//											{
//												tmpRet =  a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8 + a9 + 10;
//												ret = min(ret, tmpRet);
//												break;
//											}
//
//											push(clocks, 9);											
//										}
//										push(clocks, 8);
//									}
//									push(clocks, 7);
//								}
//								push(clocks, 6);
//							}
//							push(clocks, 5);
//						}
//						push(clocks, 4);
//					}
//					push(clocks, 3);
//				}
//				push(clocks, 2);
//			}
//			push(clocks, 1);
//		}
//		push(clocks, 0);
//	}
//
//	return ret;
//}
//
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
//	
//
//		
//		int ret = solve(clocks, 0);
//		ret = (ret == INF) ? -1 : ret;
//		cout << ret << endl;
//	}
//
//	return 0;
//}