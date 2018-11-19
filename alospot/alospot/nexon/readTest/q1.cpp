//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//// Complete the maxStep function below.
//int maxStep(int n, int k) {
//	int max = 0;
//	int step = 0;
//	int currentStep = 0;
//
//	for (int i = 0; i <= n; i++)
//	{
//		step = 0;
//		currentStep = 0;
//		for (int j = 0; j < n; j++)
//		{
//			step += 1;
//			if (i == j)
//			{
//				continue;			
//			}
//
//			currentStep += step;			
//				
//			if (currentStep == k)
//			{
//				break;
//			}
//
//		}
//		if (max < currentStep)
//			max = currentStep;
//	}
//	return max;
//}
//
//int main(void)
//{
//
//	cout << maxStep(2, 1);
//
//	return 0;
//}