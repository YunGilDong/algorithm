#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int validIdxArr[1000][2] = { 0, };

/*
bool check(string s)
{
int u, d, r, l;
u = d = r = l = 0;
bool ok = false;
for (int i = 0; i < s.length(); i++)
{
if (s[i] == 'U')	u++;
else if (s[i] == 'D')	d++;
else if (s[i] == 'R')	r++;
else if (s[i] == 'L')	l++;
}

if ((u == d) && (r == l))	ok = true;
if ((u == 0) && (d == 0) && (r == 0) && (l == 0))	ok = false;

return ok;
}
*/

int solution(string s)
{
	int answer = 5;
	int count = 0;
	string strCmd;
	int u, d, r, l;
	u = d = r = l = 0;

	for (int strGrp = 2; strGrp <= s.length(); strGrp += 2)
	{
		for (int j = 0; j < s.length(); j++)
		{
			int k;
			u = d = r = l = 0;
			for (k = j; k < (j + strGrp); k++)
			{

				if (k > s.length())
				{
					strCmd.clear();		strCmd = "";
					break;
				}
				strCmd.push_back(s[k]);
				if (s[k] == 'U')	u++;
				else if (s[k] == 'D')	d++;
				else if (s[k] == 'R')	r++;
				else if (s[k] == 'L')	l++;
			}
			if ((strCmd.length() >= 2) && (strCmd.length() % 2) == 0)
			{
				int ud = u - d;
				int rl = r - l;
				if (ud == 0 && rl == 0)
				{
					count++;
				}
			}
			strCmd.clear();		strCmd = "";
		}
	}
	answer = count;
	return answer;
}

int main(void)
{
	//string s = "URLLDRLR";
	string s = "URDLDRULDLRUDLU";

	int ret = solution(s);
	cout << ret << endl;
	return 0;
}