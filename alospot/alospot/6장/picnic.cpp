//#include <iostream>
//#include <stdio.h>
//#include <string.h>
//
//using namespace std;
//
//int c, n, m;
//int pairOf;
////int **mArr;
//int mArr[46][2];
//
//bool existIdx(int **arrIdx, int target[], int cnt)
//{
//	int n1 = n / 2;
//	int ret = 1;
//	int tarSum = 0, arrSum = 0;
//	int *arrRet;
//
//	arrRet = new int[n1];
//	for (int i = 0; i < cnt; i++)
//	{
//		tarSum = 0;
//		arrSum = 0;
//
//		ret = 1;
//		for (int j = 0; j < n1; j++)
//		{
//			tarSum += target[j];
//			arrSum += arrIdx[i][j];
//		}
//		
//		if(tarSum == arrSum)
//		{
//			for (int j = 0; j < n1; j++)
//			{
//				arrRet[j] = 0;
//				for (int k = 0; k < n1; k++)
//				{
//					if (target[j] == arrIdx[i][k])
//					{
//						arrRet[j] = 1;
//					}
//				}
//			}
//			for (int j = 0; j < n1; j++)
//				ret *= arrRet[j];
//			if (ret)
//			{
//				return true;
//			}
//		}
//	}
//	return false;
//}
//
//bool existPair(int **pair, int target[], int cnt)
//{
//	bool ret=false;
//	for (int i = 0; i < cnt; i++)
//	{	
//		if (target[0] == pair[i][0] || target[0] == pair[i][1])
//		{
//			ret = true;
//			break;
//		}
//		if (target[1] == pair[i][0] || target[1] == pair[i][1])
//		{
//			ret = true;
//			break;
//		}
//	}
//	return (ret);
//}
//int picnic()
//{
//	int n1=0,count = 0;
//	int pairCnt = 0;
//	int pairIdx = 0;
//	int **pair;
//	int **arrIdx;
//	n1 = n / 2;
//
//
//	pair = new int*[m];
//	for (int i = 0; i < m; i++)
//		pair[i] = new int[2];
//
//	arrIdx = new int*[m];
//	for (int i = 0; i < m; i++)
//		arrIdx[i] = new int[n1];
//
//	for (int i = 0; i < m; i++)
//	{
//		pair[pairIdx][0] = mArr[i][0];
//		pair[pairIdx][1] = mArr[i][1];
//		arrIdx[count][pairCnt] = i;
//		pairCnt++;
//		for (int j = 0; j < m; j++)
//		{
//			//if ((m != 1) && (j == i))	continue;
//			if (j == i)
//			{
//				if (m == 1)	count = pairCnt;
//				continue;
//			}
//			if (!existPair(pair, mArr[j], pairCnt))
//			{
//				pairIdx++;
//				pair[pairIdx][0] = mArr[j][0];
//				pair[pairIdx][1] = mArr[j][1];
//
//				arrIdx[count][pairCnt] = j;
//
//				pairCnt++;
//				if (pairIdx == (n1 - 1))
//				{		
//					if (existIdx(arrIdx, arrIdx[count], count))
//					{
//						memset(arrIdx[count], 0x00, sizeof(arrIdx[count]));
//						count--;
//					}
//
//					count++;
//					pairIdx = 0;
//					break;
//				}
//			}
//		}
//		pairCnt = 0;
//		pairIdx = 0;
//	}
//
//	for (int i = 0; i < m; i++)
//		delete[] pair[i];
//	delete[] pair;
//
//	for (int i = 0; i < m; i++)
//		delete[] arrIdx[i];
//	delete[] arrIdx;
//
//	return count;
//}
//int main(void)
//{
//	cin >> c;
//
//	for (int tcase = 0; tcase < c; tcase++)
//	{
//		cin >> n >> m;
//
//		memset(mArr, 0, sizeof(mArr));
//		for (int i = 0; i < (m * 2); i++)
//		{
//			cin >> pairOf;
//			if (i % 2 == 0)
//				mArr[(i / 2)][0] = pairOf;
//			else
//				mArr[(i / 2)][1] = pairOf;
//		}
//		cout <<  picnic() << endl;
//	}
//
//	return 0;
//}