//#include <iostream>
//#include <stdio.h>
//#include <cstring>
//
//using namespace std;
//
//int c, n, m;
//bool arrFriends[10][10];
///*
//int pairCounting(bool taken[])
//{
//	int ret = 0;
//	bool finished = true;
//	for (int i = 0; i < n; i++)
//	{
//		if (!taken[i])	finished = false;
//	}
//	if (finished)	return 1;
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (!taken[i] && !taken[j] && arrFriends[i][j])
//			{
//				taken[i] = taken[j] = true;
//				ret += pairCounting(taken);
//				taken[i] = taken[j] = false;
//			}
//		}
//	}
//	return ret;
//}
//*/
//int pairCounting2(bool taken[])
//{
//	int ret = 0;
//	int firstFree = -1;
//
//	for (int i = 0; i < n; i++)
//	{
//		if (!taken[i]) {
//			firstFree = i;
//			break;
//		}
//	}
//
//	if (firstFree == -1)	return 1;
//
//	for (int pairWith = firstFree + 1; pairWith < n; pairWith++)
//	{
//		if (!taken[pairWith] && arrFriends[firstFree][pairWith])
//		{
//			taken[firstFree] = true;
//			taken[pairWith] = true;
//			ret+=pairCounting2(taken);
//			taken[firstFree] = taken[pairWith] = false;
//		}
//	}
//	return ret;
//}
//
//int main(void)
//{
//	bool taken[10];
//	cin >> c;
//	
//	while ((c--) > 0)
//	{
//		cin >> n >> m;
//		memset(arrFriends, 0, sizeof(arrFriends));
//		for (int i = 0; i < (m); i++)
//		{
//			int a, b;
//			cin >> a >> b;
//			arrFriends[a][b] = arrFriends[b][a] = true;
//		}
//		memset(taken, 0, sizeof(taken));
//		cout << pairCounting2(taken) << endl;
//	}
//	return 0;
//}