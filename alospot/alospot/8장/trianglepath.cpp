//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <cstring>
//
//using namespace std;
//int tri[100][100] = { 0, };
//int cache[100][100];
//
//int solution(int n, int y, int x)
//{
//	int ret = 0;
//
//	if (y == (n - 1))
//	{
//		return tri[y][x];
//	}
//
//	return max((tri[y][x] + solution(n, y + 1, x)), tri[y][x] + solution(n, y + 1, x + 1));
//}
//
//int memoized(int n, int y, int x)
//{
//	if (y == (n - 1))
//	{
//		return tri[y][x];
//	}
//	int &ret = cache[y][x];
//	if (ret != -1)	return ret;
//
//	ret = max((tri[y][x] + memoized(n, y + 1, x)), tri[y][x] + memoized(n, y + 1, x + 1));
//	return ret;
//}
//
//int main(void)
//{
//	int c = 0;
//	int n = 0;
//	cin >> c;
//	for (int i = 0; i < c; i++)
//	{
//		memset(tri, 0, sizeof(tri));
//		memset(cache, -1, sizeof(cache));
//		cin >> n;
//		for (int j = 0; j < n; j++)
//		{
//			for (int k = 0; k <= j; k++)
//			{
//				cin >> tri[j][k];
//			}
//		}
//		int ret = memoized(n, 0, 0);
//		cout << ret << endl;
//	}
//
//	return 0;
//}