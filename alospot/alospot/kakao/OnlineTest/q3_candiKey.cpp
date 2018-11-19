//#include <iostream>
//#include <string>
//#include <cstring>
//#include <vector>
//#include <map>
//
//
//using namespace std;
//
//bool getMapCount(int rowCnt, map <string, string> mapRela)
//{
//	map<string, string>::iterator it;
//	int count = 0;
//	for (it = mapRela.begin(); it != mapRela.end(); )
//	{
//		count++;
//		mapRela.erase(it++);
//	}
//	if(count == rowCnt)
//		return true;
//	return false;
//}
//
//
//int solution(vector<vector<string>> relation) {
//	int answer = 0;
//	int stIdx = 0;
//	int keyCount = 1;
//	bool *exceptTupleIdx;
//	int rowCnt = 0;
//	
//	map <string, string> mapIdNm;
//	map<string, string>::iterator it;
//	
//	exceptTupleIdx = new bool[(relation[0].size)];
//	memset(exceptTupleIdx, 1, sizeof(exceptTupleIdx));
//	rowCnt = relation.size();
//
//	for (int i = 0; i < relation.size(); i++)
//	{
//		for (int j = 0; j < relation[i].size(); j++)
//		{
//			cout << relation[j][i] << ", ";
//			
//		}
//		cout << endl;
//	}
//
//	delete[] exceptTupleIdx;
//	return answer;
//}
//
//int main(void)
//{
//	vector<vector<string>> relation;
//	relation.assign(6, vector<string>(4));
//
//	relation[0][0] = "100";
//	relation[0][1] = "ryan";
//	relation[0][2] = "music";
//	relation[0][3] = "2";
//
//	relation[1][0] = "200";
//	relation[1][1] = "apeach";
//	relation[1][2] = "math";
//	relation[1][3] = "2";
//
//	relation[2][0] = "300";
//	relation[2][1] = "tube";
//	relation[2][2] = "computer";
//	relation[2][3] = "3";
//
//	relation[3][0] = "400";
//	relation[3][1] = "con";
//	relation[3][2] = "computer";
//	relation[3][3] = "4";
//
//	relation[4][0] = "500";
//	relation[4][1] = "muzi";
//	relation[4][2] = "music";
//	relation[4][3] = "3";
//
//	relation[5][0] = "600";
//	relation[5][1] = "apeach";
//	relation[5][2] = "music";
//	relation[5][3] = "2";
//
//	solution(relation);
//	return 0;
//	
//}