//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
////int dx[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };
////int dy[8] = { -1, 0, 1,-1, 1, -1, 0, 1 };
//
//int dx[4] = { -1,  0, 0, 1 };
//int dy[4] = {  0, -1, 1, 0 };
//
//vector<vector<int>> ColorBook;
//int areaCount = 0;
//
//
//// 반환은 영영의 넓이. 영영 갯수는? 전역변수?
//
//bool inRange(int x, int y, vector<vector<int>> picture)
//{
//	int w = picture[0].size();
//	int h = picture.size();
//	if (x < 0 || x >= h)	return false;
//	if (y < 0 || y >= w)	return false;
//
//	if (picture[x][y] == 0)	 return false;
//
//	
//	return true;
//}
//
//int travelPixcel(int colorVal, int x, int y, vector<vector<int>> picture)
//{
//	// 범위 초과 및 0 발견시 return ;
//	// 현재 x, y, 가 현재 탐색 컬러값과 같으면 다음 위치 트라벨.
//
//	int ret = 0;
//	if (!inRange(x, y, picture))
//		return 0;
//
//	// 이미 체크한 공간
//	if (ColorBook[x][y] == 1)	return 0;
//
//	if (picture[x][y] != colorVal)
//	{		
//		return 0;
//	}
//
//	for (int i = 0; i < 4; ++i)
//	{
//		int nextX = x + dx[i];
//		int nextY = y + dy[i];
//
//	
//		if (picture[x][y] == colorVal && !ColorBook[x][y])
//		{
//			ColorBook[x][y] = 1;
//			ret += (travelPixcel(colorVal, nextX, nextY, picture) + 1);
//		}
//		else
//		{
//			ret += (travelPixcel(colorVal, nextX, nextY, picture) + 0);
//		}		
//	}
//
//	return ret;	
//}
//
//// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
//vector<int> solution(int m, int n, vector<vector<int>> picture) {
//	int number_of_area = 0;
//	int max_size_of_one_area = 0;
//
//	ColorBook.assign(picture.size(), vector<int>(picture[0].size(), 0));
//
//	for (int i = 0; i < picture.size(); i++)
//	{
//		for (int j = 0; j < picture[0].size(); j++)
//		{
//			if (ColorBook[i][j] == 0 && picture[i][j] != 0)
//			{			
//					
//				//cout << "start val [" << picture[i][j] << "] idx : " << i<<", "<< j << endl;
//				number_of_area++;
//				int pixcel_size = travelPixcel(picture[i][j], i, j, picture);
//
//
//				cout << "pixcel size : " << pixcel_size << endl;
//				cout << "---------------------------------\n";
//				for (int i = 0; i < 6; i++)
//				{
//					for (int j = 0; j < 4; j++)
//					{
//						cout << ColorBook[i][j] << " ";
//					}
//					cout << endl;
//				}
//				cout << "---------------------------------\n";
//
//				max_size_of_one_area = max(max_size_of_one_area, pixcel_size);
//			}
//		}
//	}
//
//
//	vector<int> answer(2);
//	answer[0] = number_of_area;
//	answer[1] = max_size_of_one_area;
//	return answer;
//}
//
//int main(void)
//{
//	/*vector<vector<int>> Color = {
//		{1,1,1,0},
//		{1,2,2,0},
//		{1,0,0,1},
//		{0,0,0,1},
//		{0,0,0,3},
//		{0,0,0,3},
//	};*/
//
//	vector<vector<int>> Color = {
//		{1,1,1,0},
//		{1,1,1,0},
//		{0,0,0,1},
//		{0,0,0,1},
//		{0,0,0,1},
//		{0,0,0,1},
//	};
//
//	for (int i = 0; i < 6; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			cout << Color[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	ColorBook.assign(6, vector<int>(4,0));
//
//	vector<int> val = solution(6, 4, Color);
//	cout << val[0] << ", " << val[1] << endl;
//
//	return 0;
//}