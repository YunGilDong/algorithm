//#include <string>
//#include <vector>
//#include<iostream>
//#include<algorithm>
//using namespace std;
//int first[5] = { 1,2,3,4,5 };
//int second[8] = { 2,1,2,3,2,4,2,5 };
//int third[10] = { 3,3,1,1,2,2,4,4,5,5 };
//int limit[3] = { 5,8,10 };
//vector<int> solution(vector<int> answers) {
//	int max_val = -1;
//	vector<int> answer;
//	vector<int> ans_person;
//	for (int i = 0; i<3; i++) {
//		int score = 0;
//		for (int j = 0; j<answers.size(); j++) {
//			if (i == 0) {
//				if (first[j%limit[i]] == answers[j])
//					score++;
//			}
//			else if (i == 1) {
//				if (second[j%limit[i]] == answers[j])
//					score++;
//			}
//			else {
//				if (third[j%limit[i]] == answers[j])
//					score++;
//			}
//		}
//		ans_person.push_back(score);
//		max_val = max(max_val, score);
//	}
//	for (int i = 0; i<ans_person.size(); i++) {
//		if (ans_person[i] == max_val)
//			answer.push_back(i + 1);
//	}
//
//	return answer;
//}