#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
// ygd
using namespace std;
int useWords[50] = { 0, };

bool checkWord(string b ,string str)
{
	bool ok = false;
	int sameWord = 0;

	for (int i = 0; i < str.length(); i++)
	{
		if (b[i] == str[i])
			sameWord++;
	}

	if (sameWord >= (str.length() - 1))
	{
		//cout << "[##]   [" << b << "],  [" << str << "]" << endl;
		ok = true;
	}

	return ok;
}

int dfs(string b, string t, vector<string> words, int depth)
{
	int ret = 9999;

	if (b == t)
	{
		ret = 0;
		return ret;
	}
	if (depth == words.size())
	{
		if (b != t)
		{
			ret = 9999;
			return ret;
		}
	}

	for (int i = 0; i < words.size(); i++)
	{
		if (useWords[i] == 1)	continue;

		if (!checkWord(b, words[i]))
			continue;

		useWords[i] = 1;
		ret = min(ret, (dfs(words[i], t, words, depth+1)+1));
		useWords[i] = 0;
	}

	return ret;
}

int solution(string begin, string target, vector<string> words) {
	int answer = 0;

	answer = dfs(begin, target, words,0);
	if (answer >= 9999)
		answer = 0;
	return answer;
}

int main(void)
{
	string begin = "hit";
	string target = "cog";
	vector<string> words;
	
	/*words.push_back("hot");
	words.push_back("dot");
	words.push_back("dog");
	words.push_back("lot");
	words.push_back("log");
	words.push_back("cog");*/

	words.push_back("hot");
	words.push_back("dot");
	words.push_back("dog");
	words.push_back("lot");
	words.push_back("log");


	int ret = solution(begin, target, words);
	cout << ret << endl;

	return 0;
}