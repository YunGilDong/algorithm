#include <string>
#include <vector>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

int mem[500][500] = { 0, };

bool asc(int a, int b)
{
	return a > b;
}

int travelTriagle(vector<vector<int>> triangle, int level, int idx)
{
	int& ret = mem[level][idx];
	int ret1 = 0;
	int ret2 = 0;

	if (ret != -1)	return ret;

	if (level == (triangle.size() - 1))
	{
		//cout << "end:" << triangle[level][idx] << "  [idx] : " << idx << endl;
		return triangle[level][idx];
	}
	//cout << triangle[level][idx] <<"  LV : "<<level << endl;

	if ((ret1 = triangle[level][idx] + travelTriagle(triangle, level + 1, idx)) >
		(ret2 = triangle[level][idx] + travelTriagle(triangle, level + 1, idx + 1))
		)
	{
		//cout <<"ret1 : "<< triangle[level+1][idx] <<", "<< triangle[level][idx] << endl;
		ret = ret1;
		return ret1;
	}
	else
	{
		//cout <<"ret2 : "<< triangle[level+1][idx+1] << ", " << triangle[level][idx] << endl;
		ret = ret2;
		return ret2;
	}
}

int travelTriagle2(vector<vector<int>> triangle)
{
	int vSize = triangle.size();
	vector<vector<int>> v;

	// add root
	v.push_back(triangle[0]);

	for (int i = 0; i < vSize-1; i++)
	{
		vector<int> childV;		
		int itemSize = triangle[i].size();
		childV.assign(itemSize+1, 0);
		// parent cursor
		for (int j = 0; j < itemSize; j++)
		{
			
			int parent = v[i][j];
			int child = parent + triangle[i+1][j];
			childV[j] = max(child, childV[j]);
						
			child = parent + triangle[i + 1][j+1];
			childV[j + 1] = max(child, childV[j + 1]);
		}
		v.push_back(childV);
	}

	for (int i = 0; i<v.size(); i++)
	{
		for (int j = 0; j < v[i].size(); j++)
		{
			cout << v[i][j] << ", ";
		}
		cout << endl;
	}
	sort(v[v.size() - 1].begin(), v[v.size() - 1].end(), asc);
	return v[v.size() - 1][0];
}


int solution(vector<vector<int>> triangle) {
	int answer = 0;
	memset(mem, -1, sizeof(mem));
	//answer = travelTriagle(triangle, 0, 0);
	answer = travelTriagle2(triangle);
	return answer;
}

int main(void)
{
	vector<vector<int>> v;
	v = {
		{7}
		,{3,8}
		,{8,1,0}
		,{2,7,4,4}
		,{4,5,2,6,5}
	};
	//v = {
	//	{7}
	//	,{3,8}
	//	,{8,1,0}
	//};

	int res = solution(v);
	printf("%d\n", res);

}