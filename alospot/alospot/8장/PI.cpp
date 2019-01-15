//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//#define INF 99999
//using namespace std;
//int cache[10000];
//
//int getScore(vector<int> piList)
//{
//	bool ok = true;
//	for (int i = 0; i < (piList.size()-1); i++)
//	{
//		if ((piList[i]+1) != (piList[i + 1]))
//		{
//			ok = false;
//		}
//		if (!ok)	break;
//
//	}
//	if (ok)	return 2;
//
//	ok = true;
//	for (int i = 0; i < (piList.size() - 1); i++)
//	{
//		if (piList[i] != piList[i + 1])
//		{
//			ok = false;
//		}
//		if (!ok)	break;
//	}
//	if (ok)	return 1;
//
//	ok = true;
//	int evenN = piList[0], oddN = piList[1];
//	for (int i = 2; i < (piList.size()); i++)
//	{
//		if (i % 2 == 0)
//		{
//			if (evenN != piList[i])
//				ok = false;
//		}
//		else
//		{
//			if (oddN != piList[i])
//				ok = false;
//		}
//		if (!ok)	break;
//	}
//	if (ok)	return 4;
//
//	ok = true;
//	int gap = piList[1] - piList[0];
//	for (int i = 0; i < (piList.size() - 1); i++)
//	{
//		
//		if ((piList[i] + gap) != piList[i + 1])
//		{
//			ok = false;
//		}
//		
//		if (!ok)	break;
//	}
//	if (ok)	return 5;
//
//	return 10;
//}
//
//int pi(vector<int> piList)
//{
//	int ret = INF;
//	vector<int> partV;
//
//	if (piList.size() == 0)	return 0;
//	else if (piList.size() < 3)	return 10;
//	
//	int len = piList.size();
//	len = (len >= 5 ? 5 : (len >= 4 ? 4 : 3));
//
//	for (int i = 0; i < len; i++)
//	{
//		
//		partV.push_back(piList[0]);
//		piList.erase(piList.begin());
//
//		if (i == 2)
//		{
//			/*cout << "score 3 : " << getScore(partV) << " : ";
//			for (int j = 0; j < partV.size(); j++)
//			{
//				cout << partV[j] << " ";
//			}
//			cout << endl;*/
//			ret = min(ret, getScore(partV) + pi(piList));
//		}
//		else if (i == 3)
//		{
//			/*cout << "score 4 : " << getScore(partV) << " : ";
//			for (int j = 0; j < partV.size(); j++)
//			{
//				cout << partV[j] << " ";
//			}
//			cout << endl;*/
//			ret = min(ret, getScore(partV) + pi(piList));
//		}
//		else if (i == 4)
//		{
//			/*cout << "score 5 : " << getScore(partV) << " : ";
//			for (int j = 0; j < partV.size(); j++)
//			{
//				cout << partV[j] << " ";
//			}
//			cout << endl;*/
//			ret = min(ret, getScore(partV) + pi(piList));
//		}
//	}
//	return ret;
//}
//
//int main(void)
//{
//	string str;
//	string remainder;
//	vector<int> v;
//	int c;
//	//vector<int> v = { 1,2,6,7,3,9,3,9};	//1212 : 4, 222 : 1, 2525 : 4, 86 : 10
//	cin >> c;
//	getline(cin, remainder);
//	for (int i = 0; i < c; i++)
//	{
//		smemset(cache, -1, sizeof(cache));
//		v.clear();
//		str.clear();
//		getline(cin, str);
//		for (int j = 0; j < str.size(); j++)
//		{
//			char ch = str[j];
//			v.push_back(atoi(&ch));
//		}
//		int ret = pi(v);
//		cout << ret << endl;
//	}
//
//	return 0;
//}