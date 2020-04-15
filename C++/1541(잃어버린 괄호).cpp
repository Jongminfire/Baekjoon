//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	string s;
//	cin >> s;
//
//	vector<int> v(s.size());
//	
//	int now=0;
//	int count = 1;
//	int result = 0;
//	bool sub = false;
//
//	for (int i = 0;i < s.size();i++)
//	{
//		if (s[i] == '+')
//		{
//			if (sub == true)
//			{
//				result -= now;
//				now = 0;
//				count = 1;
//			}
//			else
//			{
//				result += now;
//				now = 0;
//				count = 1;
//			}
//		}
//		else if (s[i] == '-')
//		{
//			if (sub == true)
//			{
//				result -= now;
//				now = 0;
//				count = 1;
//			}
//			else
//			{
//				result += now;
//				now = 0;
//				count = 1;
//			}
//
//			sub = true;
//		}
//		else
//		{
//			if(count!=1)
//				now *= 10;
//
//			now += (int)s[i]-48;		// string으로 받으므로 정수변환 후 아스키 -48
//			count++;
//		}
//	}
//
//	if (sub == true)
//		result -= now;
//	else
//		result += now;
//
//	cout << result << "\n";
//
//	return 0;
//}
//
///*
//
//첫째 줄에 식이 주어진다. 식은 ‘0’~‘9’, ‘+’, 그리고 ‘-’만으로 이루어져 있고, 가장 처음과 마지막 문자는 숫자이다. 그리고 연속해서 두 개 이상의 연산자가 나타나지 않고, 5자리보다 많이 연속되는 숫자는 없다. 수는 0으로 시작할 수 있다.
//
//https://www.acmicpc.net/problem/1541
//
//*/