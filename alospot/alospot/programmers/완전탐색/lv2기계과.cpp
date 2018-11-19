//#include <iostream>
//#include <vector>
//#include <string>
//#include <set>
//#include <algorithm>
//
//using namespace std;
//vector<int> vPrime;
//set <int> sPrime;
//
//bool compare(char a, char b)
//{
//	return a > b;   // ¿ª¼ø
//}
//
//bool primeNumberCheck(int n)
//{
//	bool ok = true;
//
//	if (n == 0|| n == 1)	return false;
//	if (n % 2 == 0)
//	{
//		if (n == 2)	return true;
//		return false;
//	}
//
//	for (int i = 3; i < n/2; i++)
//	{
//		if (n%i == 0)
//		{
//			ok = false;
//			break;
//		}
//	}
//	return ok;
//}
//
//
//
//int solution(string numbers)
//{
//	int                   answer = 0;
//	int                   size = numbers.size();
//	sort(numbers.begin(), numbers.end());
//
//	do
//	{
//		for (int i = 1; i <= size; ++i)
//		{
//			cout << numbers.substr(0, i) << endl;
//			sPrime.insert(stoi(numbers.substr(0, i)));
//		}
//	} while (next_permutation(numbers.begin(), numbers.end()));
//
//	for (auto && set : sPrime)
//	{
//		if (primeNumberCheck(set))
//		{
//			answer++;
//		}
//	}
//	return answer;
//}
//
//int main(void)
//{
//	string str1;
//	string str("1234");
//	int rst = solution(string("1234"));
//	cout << "rst : " << rst << endl;;
//
//	vector<int> arr;
//	for (int i = 0; i < str.size(); i++)
//	{
//		char s = str[i];
//		arr.push_back(atoi(&s));
//	}
//	cout << str << endl;
//	while (next_permutation(arr.begin(), arr.end()))
//	{
//		for (int i = 0; i < arr.size(); i++)
//		{
//			cout << arr[i]<<" ";
//		}
//		cout << endl;
//	}
//}