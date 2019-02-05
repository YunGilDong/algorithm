//#include <string>
//#include <vector>
//#include <algorithm>
//#include <map>
//#include <iostream>
//
//using namespace std;
//
//string solution(vector<string> participant, vector<string> completion) {
//	string answer = "";
//	map<string, int> strMap;
//	
//	for (auto elem : completion)
//	{
//		if (strMap.end() == strMap.find(elem))
//		{
//			strMap.insert(make_pair(elem, 1));
//			cout << "insert : " << elem << endl;
//		}
//		else
//		{
//			cout << "else : " << strMap[elem] << endl;
//			strMap[elem]++;
//		}
//	}
//
//	for (auto elem : participant)
//	{
//		if (strMap.end() == strMap.find(elem))
//		{
//			answer = elem;
//			cout << "[1] : " << elem << endl;
//			break;
//		}
//		else
//		{
//			cout << "[2] : " << elem;
//			strMap[elem]--;
//			cout << "     " << strMap[elem] << endl;
//			if (strMap[elem] < 0)
//			{
//				answer = elem;
//				break;
//			}
//		}
//	}
//
//	return answer;
//}
//
//int main(void)
//{
//	/*vector<string> pp = { "leo","kiki","eden"};
//	vector<string> comp = { "eden", "kiki" };*/
//
//	vector<string> pp = { "marina", "josipa", "nikola", "vinko", "filipa" };
//	vector<string> comp = { "josipa", "filipa", "marina", "nikola" };
//
//	string s = solution(pp, comp);
//	cout << s << endl;
//	return 0;
//}