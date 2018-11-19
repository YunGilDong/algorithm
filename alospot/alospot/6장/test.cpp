//#include<cassert>
//#include<vector>
//#include<iostream>
//#include<cstring>
//using namespace std;
//
//int n, m;
//bool areFriends[10][10];
//
//
//// taken[i] = i��° �л��� ¦�� �̹� ã������ true, �ƴϸ� false
//int countPairings(bool taken[10]) {
//	// ���� ���: ��� �л��� ¦�� ã������ �� ���� ����� ã������ �����Ѵ�.
//	bool finished = true;
//	for(int i = 0; i < (n); i++) 
//		if(!taken[i]) finished = false;
//
//	if(finished) return 1;
//
//	int ret = 0;
//	for (int i = 0; i < (n); i++)
//	{
//		for (int j = 0; j < (n); j++)
//		{
//			if (!taken[i] && !taken[j] && areFriends[i][j]) 
//			{
//				taken[i] = taken[j] = true;
//				ret += countPairings(taken);
//				taken[i] = taken[j] = false;
//			}
//		}
//	}
//	return ret;
//}
//
///* 
//int countPairings(bool taken[10]) {
//	// ���� �л��� �� ���� ��ȣ�� ���� �л��� ã�´�
//	int firstFree = -1;
//	for (int i = 0; i < (n); i++) {
//		if (!taken[i]) {
//			firstFree = i;
//			break;
//		}
//	}
//	// ���� ���: ��� �л��� ¦�� ã������ �� ���� ����� ã������ �����Ѵ�.
//	if (firstFree == -1) return 1;
//	int ret = 0;
//	for (int pairWith = (firstFree + 1); pairWith < (n); pairWith++) {
//		if (!taken[pairWith] && areFriends[firstFree][pairWith]) {
//			taken[firstFree] = taken[pairWith] = true;
//			ret += countPairings(taken);
//			taken[firstFree] = taken[pairWith] = false;
//		}
//	}
//	return ret;
//}
///**/
//
//int main() {
//	int cases;
//	cin >> cases;
//	while (cases--) {
//		cin >> n >> m;
//		//assert(n <= 10);
//		memset(areFriends, 0, sizeof(areFriends));
//		for (int i = 0; i < (m); i++) {
//			int a, b;
//			cin >> a >> b;
//			//assert(0 <= a && a < n && 0 <= b && b < n);
//			//assert(!areFriends[a][b]);
//			areFriends[a][b] = areFriends[b][a] = true;
//		}
//		bool taken[10];
//		memset(taken, 0, sizeof(taken));
//		cout << countPairings(taken) << endl;
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//			cout << areFriends[i][j] << " ";
//
//		cout << endl;
//	}
//}
