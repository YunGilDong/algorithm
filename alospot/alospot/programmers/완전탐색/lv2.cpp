//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//vector<int> vPrime;
//string str = "12345";
//int takenIdx[7] = { 0, };
//int indexList[7] = { 0, };
//
//int solution(string numbers) {
//	int answer = 0;
//	int len = numbers.size();
//	string strNum = "";
//	for (int numLen = 1; numLen <= len; numLen++)
//	{
//		memset(takenIdx, 0, sizeof(takenIdx));
//		// 숫자 탐색[1]
//		for (int i = 0; i < len; i++)
//		{
//			strNum = "";
//			memset(indexList, 0, sizeof(indexList));
//			// index search
//			for (int head = 0; head < numLen - 1; head++)
//			{
//				indexList[head] = head + i;
//				if (indexList[head] >= len)
//				{
//					indexList[head] -= len;
//				}
//				//strNum += to_string(indexList[head]);
//				strNum += numbers[indexList[head]];
//			}
//			cout <<"[NUMLEN:]"<< numLen << "[NUM LIST]" << strNum << endl;
//			
//
//			// 숫자 조합
//			for (int k = 0; k < len; k++)
//			{
//				bool isHeadIdx = false;
//				if (numLen != 1)
//				{
//					// index check
//					for (int idx = 0; idx < len; idx++)
//					{
//						if (indexList[idx] == k)
//						{
//							isHeadIdx = true;
//							break;
//						}
//					}
//				}
//				if (isHeadIdx)	continue;
//
//				//strNum += numbers[k];
//
//				//cout << "[2] " << strNum << "  ";
//			}
//			//cout << endl;
//		}
//	}
//
//
//
//	return answer;
//}
//
//int main(void)
//{
//	solution(string("12345"));
//
//	return 0;
//}