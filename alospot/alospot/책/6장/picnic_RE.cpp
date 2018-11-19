//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int frientMap[10][10];
//int n, m;
//int isPair[10] = { 0, };
//
//int picnic(int *isPair)
//{
//	int searchN = -1;
//	int ret = 0;
//	// 검색할 친구 넘버 구하기
//	for (int i = 0; i < n; i++)
//	{
//		if (isPair[i] == 0)
//		{
//			searchN = i;
//			break;
//		}
//	}
//	// 모든 쌍이 이루어 졌을 경우
//	if (searchN == -1)	return 1;
//
//	for (int i = searchN+1; i < n; i++)
//	{
//		if ((!isPair[i]) && frientMap[searchN][i] == 1)
//		{
//			isPair[searchN] = isPair[i] = 1;
//			ret += picnic(isPair);
//			isPair[searchN] = isPair[i] = 0;
//		}
//	}
//
//	return ret;
//}
//
//
//int main(void)
//{
//	int a, b;
//	cin >> n >> m;
//
//	memset(frientMap, 0, sizeof(frientMap));
//	for (int i = 0; i < m; i++)
//	{
//		cin >> a >> b;
//		frientMap[a][b] = frientMap[b][a] = 1;
//	}
//	memset(isPair, 0, sizeof(isPair));
//	cout << picnic(isPair) << endl;
//	return 0;
//}