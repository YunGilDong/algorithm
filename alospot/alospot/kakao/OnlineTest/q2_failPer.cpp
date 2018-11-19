//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//
//bool desc(double *a, double *b)
//{
//	cout << a[0] << " " << b[0]<<" ";
//	return a[0] > b[0];
//}
//
//int getNoClearUser(int stageLv, vector<int> stages)
//{
//	int count = 0;
//	for (int i = 0; i < stages.size(); i++)
//	{
//		if (stages[i]== stageLv)	count++;
//	}
//	return count;
//}
//
//int getStageUser(int stageLv, vector<int> stages)
//{
//	int count = 0;
//	for (int i = 0; i < stages.size(); i++)
//	{
//		if (stages[i] >= stageLv)	count++;
//	}
//	return count;
//}
//
//vector<int> solution(int N, vector<int> stages) {
//	vector<int> answer;
//	vector<double*> temAnswer;
//
//
//	double perN = -1.0;
//	double **failPer;
//	int *stageUser, *noClearUser;
//	
//	failPer = new double*[(N+1)];
//	for (int i = 0; i < (N + 1); i++)
//	{
//		failPer[i] = new double[2];
//	}
//
//	int sz = stages.size() + 1;
//
//	stageUser = new int[sz];
//	noClearUser = new int[sz];
//
//	int noClearCnt = 0;
//	int stageUserCnt = 0;
//
//	for (int i = 1; i <= N; i++)
//	{
//		stageUser[i] = getStageUser(i, stages);
//		noClearUser[i] = getNoClearUser(i, stages);
//		failPer[i][0] = (double)noClearUser[i] / stageUser[i];
//		failPer[i][1] = i;
//
//		temAnswer.push_back(failPer[i]);
//	}
//
//	sort(temAnswer.begin(), temAnswer.end(), desc);
//	for (int i = 0; i < N; i++)
//	{
//		answer.push_back((int)temAnswer[i][1]);
//	}
//	for (int i = 0; i < N; i++)
//	{
//		cout << answer[i] << " ";
//	}
//	
//	delete[] stageUser;
//	delete[] noClearUser;
//	for (int i = 0; i < (N + 1); i++)
//		delete[] failPer[i];
//	delete[] failPer;
//
//	return answer;
//}
//
//
//int main(void)
//{
//	int N;
//	vector<int> stages = { 2,1,2,6,2,4,3,3 };
//	//vector<int> stages = { 4,4,4,4,4 };
//	cin >> N;
//	solution(N, stages);
//	return 0;
//}