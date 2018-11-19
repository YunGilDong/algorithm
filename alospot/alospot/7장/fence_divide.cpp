//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//vector<int> h;
//
//int solve(int left, int right)
//{
//	// 기저사례 : 판자가 하나밖에 없는 경우
//	if (left == right)	return h[left];
//	
//	int mid = (left + right) / 2;
//
//	// 분할한 문제를 각개격파
//	//int ret = max(solve(left, mid), solve(mid + 1, right));
//
//	int ret1 = solve(left, mid);
//	int ret2 = solve(mid + 1, right);
//	int ret = max(ret1, ret2);
//
//	// 부분문제 3: 두부분에 모두 걸치는 사각형 중 가장 큰 것을 찾는다.
//	int lo = mid, hi = mid + 1;
//	int height = min(h[lo], h[hi]);
//
//	// mid, mid+1 만 포함하는 너비 2인 사각형을 고려한다.
//	ret = max(ret, height * 2);
//	
//	while (left < lo || hi < right)
//	{
//		// 항상 높이가 더 높은 쪽으로 확장한다. 
//		if (hi < right && (lo == left || h[lo - 1] < h[hi + 1]))
//		{
//			hi++;
//			height = min(height, h[hi]);
//		}
//		else
//		{
//			lo--;
//			height = min(height, h[lo]);
//		}
//
//		// 확장한 후 사각형의 넓이
//		ret = max(ret, height * (hi - lo + 1));
//	}
//	return ret;
//}
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
//		int rst = solve(0, n-1);
//		cout << rst << endl;
//
//		h.clear();
//	}
//
//	return 0;
//}