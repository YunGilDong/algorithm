//#include <iostream>
//#include <string>
//#include <vector>
//#include <map>
//#include <algorithm>
//
//using namespace std;
//
//bool asc(vector<int> a, vector<int> b)
//{
//	cout <<"##"<< a[0] << ", " << b[0] << endl;
//	return a[0] > b[0];
//}
//
//vector<int> solution(vector<string> genres, vector<int> plays) {
//	vector<int> answer;
//	map<string, vector<vector<int>>> m;
//	int key = 0;
//	
//	for (auto strGn : genres)
//	{
//		// 신규 장르
//		if (m.end() == m.find(strGn))
//		{
//			vector<vector<int>> v;
//			v.assign(1, vector<int>(4, 0));
//			v[0][0] = plays[key];
//			v[0][1] = key;
//			v[0][2] = plays[key];
//			// insert 
//			m.insert(make_pair(strGn, v));
//		}
//		else
//		{
//			vector<vector<int>> &v = m[strGn];
//			int sz = v.size();
//			v.resize((sz + 1), vector<int>(4, 0));
//			v[sz][0] = plays[key];
//			v[sz][1] = key;
//			v[0][2] += plays[key];
//			v[0][3] = 0;
//		}
//		key++;
//	}
//	map<string, vector<vector<int>>>::iterator it;
//	map<string, vector<vector<int>>>::iterator it2;
//	
//	for (it = m.begin(); it != m.end();)
//	{
//		int max = 0;
//		string strGn = "";
//		for (it2 = m.begin(); it2 != m.end(); it2++)
//		{
//			//if (it2 == m.end())	break;
//
//			vector<vector<int>> v = m[it2->first];
//			int n = v[0][2];
//			string str = it2->first;
//			if (max < n)
//			{
//				max = n;
//				strGn = str;
//			}
//		}
//		// 출력부
//		if (strGn != "")
//		{
//			vector<vector<int>> v = m[strGn];
//			sort(v.begin(), v.end(), asc);
//			cout << "-----------------------------------\n";
//			for (int i = 0; i < v.size(); i++)
//			{
//				if (i > 1)	break;
//				answer.push_back(v[i][1]);
//				cout << v[i][0] << ", " << v[i][1] << endl;
//			}
//			cout << "-----------------------------------\n";
//
//			// map 제거부
//			if (m.size() == 1)	// 이걸 안하면 최상위 for문에서 오류..
//				break;
//			m.erase(strGn);
//		}
//		
//	}
//	return answer;
//}
//
//int main(void)
//{
//	vector<string> g = { "classic", "pop", "classic", "classic", "pop" };
//	vector<int> p = { 500, 600, 150, 800, 2500};
//	vector<int> v = solution(g, p);
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << v[i] << ", ";
//	}
//	cout << endl;
//	return 0;
//}