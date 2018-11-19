//#include <iostream>
//#include <string>
//#include <vector>
//#include <map>
//
//using namespace std;
//#define ENT		1	
//#define LEAV	2
//#define CHG		3
//
//vector<string> CheckSubString(vector<string> record)
//{
//	vector <string> answer;
//	string str = "";
//	string strGubun = "";
//	string strId = "";
//	string strId2 = "";
//	string strName = "";
//
//	map <string, string> mapIdNm;
//	map<string, string>::iterator it;
//	for (int i = 0; i < record.size(); i++)
//	{
//		strGubun = record[i].substr(0, record[i].find(" "));
//		strId = record[i].substr(record[i].find(" ") + 1);
//		strId2 = strId.substr(0, strId.find(" "));
//		strName = strId.substr(strId.find(" ") + 1);
//		
//		if (strGubun == "Enter")
//		{
//			str = strId2 + "´ÔÀÌ µé¾î¿Ô½À´Ï´Ù.";
//			answer.push_back(str);
//			
//			if ((it = mapIdNm.find(strId2)) == mapIdNm.end())
//			{
//				mapIdNm.insert(pair<string, string>(strId2, strName));
//			}
//			else
//			{
//				it->second = strName;
//			}
//		}
//		else if (strGubun == "Leave")
//		{
//			strId2 = strId.substr(0, strId.find(" ")-1);
//			strName = strId.substr(strId.find(" ") + 1);
//			str = strId2 + "´ÔÀÌ ³ª°¬½À´Ï´Ù.";
//			answer.push_back(str);
//
//		}
//		else if (strGubun == "Change")
//		{
//			if ((it = mapIdNm.find(strId2)) == mapIdNm.end())
//			{
//				mapIdNm.insert(pair<string, string>(strId2, strName));
//			}
//			else
//			{
//				it->second = strName;
//			}
//		}
//		else
//		{
//			continue;
//		}
//		str = "";
//	}
//
//
//	for (int i = 0; i < answer.size(); i++)
//	{
//		string sid = answer[i].substr(0, answer[i].find("´ÔÀÌ"));
//		string tmpStr= answer[i].substr(answer[i].find("´ÔÀÌ"));
//		
//		if ((it = mapIdNm.find(sid)) != mapIdNm.end())
//		{			
//			answer[i] = it->second + tmpStr;
//		}
//		cout << answer[i] << endl;
//	}
//	return answer;
//}
//
//int main(void)
//{
//	vector<string> record;
//	string input = "";
//	input = "Enter uid1234 Muzi"; 	record.push_back(input);
//	input = "Enter uid4567 Prodo"; 	record.push_back(input);
//	input = "Leave uid1234"; 		record.push_back(input);
//	input = "Enter uid1234 Prodo"; 	record.push_back(input);
//	input = "Change uid4567 Ryan"; 	record.push_back(input);
//
//	CheckSubString(record);
//
//	//string str = "";
//	//string strId = "";
//	//string strId2 = "";
//	//string strName = "";
//
//	//str = input.substr(0, input.find(" "));
//	//strId = input.substr(input.find(" ")+1);
//	//strId2 = strId.substr(0, strId.find(" ")-1);
//	//strName = strId.substr(strId.find(" ")+1);
//
//	//cout << str <<","<< endl;
//	//cout << strId << "," << endl;
//	//cout << strId2 << "," << endl;
//	//cout << strName << "," << endl;
//
//
//	
//	return 0;
//}