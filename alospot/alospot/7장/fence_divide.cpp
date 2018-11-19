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
//	// ������� : ���ڰ� �ϳ��ۿ� ���� ���
//	if (left == right)	return h[left];
//	
//	int mid = (left + right) / 2;
//
//	// ������ ������ ��������
//	//int ret = max(solve(left, mid), solve(mid + 1, right));
//
//	int ret1 = solve(left, mid);
//	int ret2 = solve(mid + 1, right);
//	int ret = max(ret1, ret2);
//
//	// �κй��� 3: �κκп� ��� ��ġ�� �簢�� �� ���� ū ���� ã�´�.
//	int lo = mid, hi = mid + 1;
//	int height = min(h[lo], h[hi]);
//
//	// mid, mid+1 �� �����ϴ� �ʺ� 2�� �簢���� ����Ѵ�.
//	ret = max(ret, height * 2);
//	
//	while (left < lo || hi < right)
//	{
//		// �׻� ���̰� �� ���� ������ Ȯ���Ѵ�. 
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
//		// Ȯ���� �� �簢���� ����
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