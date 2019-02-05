//#include <string>
//#include <vector>
//#include <iostream>
//#include <map>
//#include <algorithm>
//
//using namespace std;
//
//int solution(vector<vector<string>>  clothes) {
//	int answer = 0;
//	map<string, int> strMap;
//	vector<vector<int>> v;
//	int maxRow = 0;
//	int maxCol = 0;
//	int totalCloth = 0;
//	int total = 0;
//	for (int i = 0; i<clothes.size(); i++)
//	{
//		if (strMap.end() == strMap.find(clothes[i][1]))
//		{
//			strMap.insert(make_pair(clothes[i][1], 1));
//			maxCol++;
//		}
//		else
//			strMap[clothes[i][1]]++;
//
//		totalCloth++;
//		maxRow = max(maxRow, strMap[clothes[i][1]]);
//	}
//	cout << "totlaCLO : " << totalCloth << endl;
//	//maxRow = max(maxRow, maxCol);
//	maxRow = maxCol;
//
//	map<string, int>::iterator it;
//	it = strMap.begin();
//	v.assign(maxRow, vector<int>(maxCol,0));
//
//	int colIdx = 0;
//	// 각 키가 몇개 옷(물품)으로 구성이 되있는지 구함
//	while (it != strMap.end())
//	{
//		v[0][colIdx++] = it->second;
//		it++;
//		cout << v[0][(colIdx - 1)] << " ";
//	}
//	cout << endl;
//
//	//각 키를 기준으로 2개 조합의 개수 구하기
//	for (int i = 0; i < (maxCol - 1); i++)
//	{
//		int sum = 0;
//		for (int j = i; j < (maxCol - 1); j++)
//		{
//			sum += (v[0][i] * v[0][j + 1]);
//	
//		}
//		v[1][i] = sum;
//		total += sum;
//		cout<< "@"<<v[1][i] <<", ";
//	}
//	cout << endl;
//
//	//// 3 ~ n개 조합 구하기
//	colIdx = 0;
//	for (int rowIdx = 2; rowIdx < maxRow; rowIdx++)
//	{
//		for (colIdx = 0; colIdx < (maxCol-rowIdx); colIdx++)
//		{
//
//			int sum = 0;
//			for (int k = (colIdx + 1); k < maxCol; k++)
//			{
//				sum += (v[rowIdx - 1][k]);
//			}
//			sum *= (v[0][colIdx]);
//			v[rowIdx][colIdx] = sum;
//			cout <<"*("<<colIdx<<")"<< sum << " ";
//
//			total += sum;
//
//		}
//		cout << endl;
//	}
//
//	
//	answer = total + totalCloth;
//	return answer;
//}
//
//int main(void)
//{
//	cout << "disguise lv2" << endl;
//
//	/*vector<vector<string>> v = {
//		{"yellow_hat", "headgear"},
//		{ "blue_sunglasses", "eyewear" },
//		{ "green_turban", "headgear" }
//	};*/
//
//	/*vector<vector<string>> v = {
//		{ "yellow_hat", "headgear" },
//		{ "blue_sunglasses", "headgear" },
//		{ "green_turban", "headgear" }
//	};*/
//
//	/*vector<vector<string>> v = {
//		{ "yellow_hatA", "AA" },
//		{ "blue_sunglassesA", "AA" },
//		{ "yellow_hatB", "BB" },
//		{ "blue_sunglassesB", "BB" },
//		{ "yellow_hatC", "CC" },
//		{ "blue_sunglassesC", "CC" },
//		{ "yellow_hatD", "DD" },
//		{ "blue_sunglassesD", "DD" },
//		{ "yellow_hatE", "EE" },
//		{ "blue_sunglassesE", "EE" }
//		
//	};*/
//
//	vector<vector<string>> v = {
//	{ "yellow_hatA", "AA" },
//	{ "blue_sunglassesA", "AA" },
//	{ "Green_sunglassesA", "AA" },
//	{ "yellow_hatB", "BB" },
//	{ "blue_sunglassesB", "BB" },
//	{ "yellow_hatC", "CC" }
//	};
//
//	int ret = solution(v);
//	cout << ret << endl;
//
//	return 0;
//}