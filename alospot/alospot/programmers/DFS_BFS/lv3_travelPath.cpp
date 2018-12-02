#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
bool check[10000] = { false, };
vector<string> newAns;
vector<string> rstAns;

void checkAlpabetOrder(vector<string> ans)
{
	if (rstAns.size() == 0)
	{
		for (int i = 0; i < ans.size(); i++)
			rstAns.push_back(ans[i]);
	}

	bool isChange = false;
	for (int i = (ans.size()-1); i > 0; i--)
	{
		if (rstAns[i] > ans[i])
			isChange = true;
		else
			isChange = false;				
	}
	if (isChange)
	{
		for (int j = 0; j < ans.size(); j++)
			rstAns[j] = ans[j];
	}
}

void dfs(string from, string to, vector<vector<string>> tickets, int n, vector<string> &ans)
{
	if (tickets.size() == (n+1))	// ¸¶Áö¸· ÀÎµ¦½º µµÂø½Ã
		checkAlpabetOrder(ans);

	string nextAir="";
	for (int i = 0; i < tickets.size(); i++)
	{
		if (check[i])	continue;

		if (to == tickets[i][0])
		{
			nextAir = tickets[i][1];
			check[i] = true;
			ans.push_back(nextAir);
			dfs(to, nextAir, tickets, n + 1, ans);
			ans.pop_back();
			check[i] = false;
		}
	}	
}

vector<string> solution(vector<vector<string>> tickets) {
	vector<string> answer;

	for (int i = 0; i < tickets.size(); i++)
	{
		if (tickets[i][0] == "ICN")
		{
			check[i] = true;
			answer.push_back(tickets[i][0]);
			answer.push_back(tickets[i][1]);
			dfs(tickets[i][0], tickets[i][1], tickets, 0, answer);
			answer.pop_back();
			answer.pop_back();
			check[i] = false;
		}
	}

	for (int i = 0; i < rstAns.size(); i++)
		answer.push_back(rstAns[i]);

	for (int i = 0; i < answer.size(); i++)
		cout << answer[i] << ", ";

	return answer;
}

int main(void)
{
	vector<vector<string>> t;
	t.assign(5, vector<string>(2, ""));

	t[0][0] = "ICN";	t[0][1] = "SFO";
	t[1][0] = "ICN";	t[1][1] = "ATL";
	t[2][0] = "SFO";	t[2][1] = "ATL";
	t[3][0] = "ATL";	t[3][1] = "ICN";
	t[4][0] = "ATL";	t[4][1] = "SFO";

	solution(t);
	return 0;
}