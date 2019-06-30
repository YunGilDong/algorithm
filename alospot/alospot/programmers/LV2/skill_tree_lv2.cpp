#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

int getIdx(char ch, string arr)
{
	for (int i = 0; i < arr.length(); ++i)
	{
		if (ch == arr[i])
			return i;
	}
	return -1;
}

int solution(string skill, vector<string> skill_trees) {
	int answer = 0;

	int badCount = 0;
	for (int i = 0; i < skill_trees.size(); i++)
	{
		int len = skill_trees[i].length();
		
		int skillTreeIdx = -1;
		for (int j = 0; j < len; ++j)
		{
			int skillIdx = getIdx(skill_trees[i][j], skill);
			if (skillIdx == -1)
				continue;


			if ((skillTreeIdx + 1) != skillIdx)
			{
				badCount++;
				break;
			}
			else
			{
				skillTreeIdx = skillIdx;
			}
		}

	}
	answer = skill_trees.size() - badCount;
	cout << answer << endl;

	return answer;
}

/*
// skill_trees_len은 skill_trees의 길이입니다.
int solution(char* skill, char* skill_trees[], size_t skill_trees_len) {
	int answer = 0;
	
	int badCount = 0;
	for (int i = 0; i < skill_trees_len; i++)
	{
		int len = sizeof(skill_trees);
		int skillTreeIdx = -1;
		for (int j = 0; j < len; ++j)
		{
			int skillIdx = getIdx(skill_trees[i][j], skill);
			if (skillIdx == -1)	
				continue;


			if ((skillTreeIdx + 1) != skillIdx)
			{
				badCount++;
				break;
			}
			else
			{
				skillTreeIdx = skillIdx;
			}
		}
	
	}	
	answer = skill_trees_len - badCount;
	cout << answer << endl;
	return answer;
}
*/
int main(void)
{
	string str = "CBD";
	vector<string> v = { "BACDE", "CBADF", "AECB", "BDA" };

	int cnt = solution(str, v);
	return 0;
}