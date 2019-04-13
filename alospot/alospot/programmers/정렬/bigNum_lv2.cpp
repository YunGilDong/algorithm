#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <sstream>
using namespace std;

string maxStr = "";

void printNum(vector<int> v)
{
	cout << "------vector-----------\n";
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}

int bestNumber(vector<int> numbers, string& strNum)
{
	int maxN = 0;
	//printNum(numbers);
	//cout << strNum << endl;
	if (numbers.size() == 0)
	{
		int n = std::stoi(strNum);
		string s = strNum;
		return (std::stoi(s));
	}
	
	for (int i = 0; i < numbers.size(); i++)
	{
		vector<int> tmpV;
		for (int j = 0; j < numbers.size(); j++)
		{
			if (i == j)	continue;
			tmpV.push_back(numbers[j]);	
		}
		cout << numbers[i] << endl;
		stringstream ss;
		ss << numbers[i];
		string str = ss.str();
		strNum += str;
		maxN = max(bestNumber(tmpV, strNum), maxN);
		int sz = strNum.size();
		strNum.erase(sz - (str.size()));
	}
	return maxN;
}

string solution(vector<int> numbers) {
	string answer = "";
	string s="";
	int n = bestNumber(numbers, s);
	//cout << n;
	stringstream ss;
	ss << n;
	answer = ss.str();

	return answer;
}
/*
nlgn 복잡도로 풀 것.
1. 매 루프마다 베스트 넘버를 구할 것
예) 최상위 수가 가장 큰 것
....
...

*/

int main(void)
{
	//vector<int> v = { 3, 30, 34, 5, 9 };
	//vector<int> v = { 6, 10, 2 };
	//vector<int> v = { 12,121 };
	//vector<int> v = { 21,212 };
	vector<int> v = { 0,0,0,0,0 };

	/*vector<int> v = { 6 };
	vector<int>::iterator it = v.begin();
	v.erase(it);
	it;
	v.insert(it, 100);*/

	//printNum(v);
	string str = solution(v);
	cout << str;
	
	return 0;
}