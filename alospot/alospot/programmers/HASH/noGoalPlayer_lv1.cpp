//#include <string>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//bool desc(string a, string b)
//{
//	return (a < b);
//}
//
//string solution(vector<string> participant, vector<string> completion) {
//	string answer = "";
//
//	sort(participant.begin(), participant.end(), desc);
//	sort(completion.begin(), completion.end(), desc);
//
//	for (int i = 0; i < completion.size(); i++)
//	{
//		if (participant[i] != completion[i])
//		{
//			answer = participant[i];
//			break;
//		}
//	}
//	if (answer == "")
//	{
//		answer = participant[participant.size() - 1];
//
//	}
//
//	return answer;
//}
//
//int main(void)
//{
//	vector<string> pp = { "leo","kiki","eden"};
//	vector<string> comp = { "eden", "kiki" };
//
//	string s = solution(pp, comp);
//	cout << s << endl;
//	return 0;
//}