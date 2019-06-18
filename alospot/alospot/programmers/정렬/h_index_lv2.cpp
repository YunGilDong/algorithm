#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool desc(int a, int b)
{
	return a > b;
}

/*
다른사람 풀이... 젠장 
sort(citations.begin(), citations.end(), greater<int>());
for (int i = 0; i < citations.size(); ++i) {
		if (citations[i] < i + 1) {
			return i;
		}
	}

	return citations.size();
*/
int solution(vector<int> citations) {
	int answer = 0;

	sort(citations.begin(), citations.end(), desc);
	int len = citations.size();
	bool ok = false;
	int citCount = citations[0];
	
	for (citCount; citCount >= 0; --citCount)
	{
		int count = 0;
		for (int j = 0; j < len; ++j)
		{
			if (citCount <= citations[j]) {
				cout << citCount << " / " << citations[j] << " ";
				++count;

				if (citCount <= count)
				{
					cout << citCount << "  [" << count << "]" << endl;;
					answer = citCount;
					ok = true;
					break;
				}
			}
			else
			{
				break;
			}
			cout << endl;
		}
		if (ok)	break;
	}
	
	
	return answer;
}

int main(void)
{
	vector<int> v = { 1,2,3,4,5 };
	int h = solution(v);
	cout << ">>"<<h << endl;
}