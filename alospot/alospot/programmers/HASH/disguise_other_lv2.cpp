//#include <string>
//#include <vector>
//#include <unordered_map>
//#include <iostream>
//
//using namespace std;
//
//int solution(vector<vector<string>> clothes) {
//	int answer = 1;
//
//	unordered_map <string, int> attributes;
//	for (int i = 0; i < clothes.size(); i++)
//		attributes[clothes[i][1]]++;
//	for (auto it = attributes.begin(); it != attributes.end(); it++)
//		answer *= (it->second + 1);
//	answer--;
//
//	return answer;
//}
//
//int main(void)
//{
//	cout << "disguise lv2" << endl;
//	cout << "sorry.." << endl;
//
//	/*vector<vector<string>> v = {
//	{"yellow_hat", "headgear"},
//	{ "blue_sunglasses", "eyewear" },
//	{ "green_turban", "headgear" }
//	};*/
//
//	/*vector<vector<string>> v = {
//	{ "yellow_hat", "headgear" },
//	{ "blue_sunglasses", "headgear" },
//	{ "green_turban", "headgear" }
//	};*/
//
//	/*vector<vector<string>> v = {
//	{ "yellow_hatA", "AA" },
//	{ "blue_sunglassesA", "AA" },
//	{ "yellow_hatB", "BB" },
//	{ "blue_sunglassesB", "BB" },
//	{ "yellow_hatC", "CC" },
//	{ "blue_sunglassesC", "CC" },
//	{ "yellow_hatD", "DD" },
//	{ "blue_sunglassesD", "DD" },
//	{ "yellow_hatE", "EE" },
//	{ "blue_sunglassesE", "EE" }
//
//	};*/
//
//	vector<vector<string>> v = {
//		{ "yellow_hatA", "AA" },
//		{ "blue_sunglassesA", "AA" },
//		{ "Green_sunglassesA", "AA" },
//		{ "yellow_hatB", "BB" },
//		{ "blue_sunglassesB", "BB" },
//		{ "yellow_hatC", "CC" }
//	};
//
//	int ret = solution(v);
//	cout << ret << endl;
//
//	return 0;
//}