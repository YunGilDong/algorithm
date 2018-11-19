//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//vector<int> h;
//int solve(int left, int right)
//{
//	int retLT=0, retRT=0, ret=0;
//
//	
//	// 기저사례
//	if (left == right)	return (h[left]);
//
//	int mid = (left + right) / 2;
//	retLT = solve(left, mid);
//	retRT = solve(mid + 1, right);
//	ret = max(retLT, retRT);
//
//	cout << left << "," << right << endl;
//
//	int lo = mid;
//	int hi = mid+1;
//	int height = min(h[lo], h[hi]);
//	// 너비가 2인 사각형
//	ret = max(ret, height * 2);
//
//	while (left<lo || right > hi)
//	{
//		// 높이가 높은 쪽으로
//		if ((hi < right)&&((lo==left) || h[lo-1] < h[hi+1]))
//		{
//			hi++;
//			height = min(height, h[hi]);
//		}
//		else
//		{
//			lo--;
//			height = min(height, h[lo]);
//		}
//		ret = max(ret,height*(hi-lo+1));
//	}
//
//	return ret;
//}
//
//
//int main(void)
//{
//	int c, n;
//	cin >> c;
//	int rst;
//
//	for (int tcase = 0; tcase < c; tcase++)
//	{
//		cin >> n;
//		for (int i = 0; i < n; i++)
//		{
//			int num = 0;
//			cin >> num;
//			h.push_back(num);
//		}
//		int rst = solve(0, n - 1);
//		cout << rst << endl;
//
//		h.clear();
//	}
//
//	
//	return 0;
//}