//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//bool outterSize(int w, int h, int brown, vector<int>& v)
//{
//	bool ok = false;
//	int red = w*h;
//	int hap = red + brown;
//	
//	cout << "=============[IN (W)    (H)]=============" << w << ", " << h << endl;
//	for (int bH=h+2; bH<=brown; bH+=2)
//	{
//		for (int bW=w+2; bW <= brown; bW += 2)
//		{
//			
//			int n = bW * bH;
//			if (n > hap)	break;
//			if (bH > bW)	continue;
//
//			//cout << "[OUT]" << bW << ", " << bH << endl;
//	
//			if (n == hap)
//			{
//				cout << "++++++++++++[RST]++++++++++++" << endl;
//				cout<<"["<< bW << ", " << bH <<"]"<< endl;
//				cout << "+++++++++++++++++++++++++++++++" << endl;
//				v.push_back(bW);
//				v.push_back(bH);
//				ok = true;
//				break;
//			}
//			
//		}
//		if (ok)	break;
//	}
//
//	return ok;
//}
//
//vector<int> solution(int brown, int red) {
//	vector<int> answer;
//	int inW, inH;
//	bool ok = false;
//	inH = 0;
//
//	// inner size구하고 outter사이즈 구함
//	while( inW >= (inH++))
//	{
//		
//		inW = red / inH;
//
//		if (red % inH == 0)
//		{
//			ok = outterSize(inW, inH, brown, answer);
//		}
//		
//		if (ok)	break;
//	}
//
//	return answer;
//}
//
//int main(void)
//{
//	int rst = 0;
//	vector<int> v;
//	v = solution(5000, 2000000);	// 100 * 100
//	//v = solution(50, 2450);
//	//v = solution(32, 4);
//	//v = solution(32, 13);
//	v = solution(24, 24);
//	cout << endl;
//	cout << "asdf" << endl;
//	//cout << v[0] << ", " << v[1] << endl;
//	return 0;
//}