//#include <iostream>
//#include <string>
//#include <string>
//
//using namespace std;
//
//int OX(string s)
//{
//	int o = 1;
//	int ans = 0;
//	for (int i = 0;i < s.size();i++)
//	{
//		if (s[i] == 'O')
//		{
//			ans += o;
//			o++;
//		}
//		else if (s[i] == 'X')
//		{
//			o = 1;
//		}
//	}
//
//	return ans;
//}
//
//int main()
//{
//	string s;
//
//	int N;
//	cin >> N;
//
//	for (int i = 0;i < N;i++)
//	{
//		cin >> s;
//		cout << OX(s) << "\n";
//	}
//
//
//	return 0;
//}
//
///*
//
//첫째 줄에 테스트 케이스의 개수가 주어진다. 각 테스트 케이스는 한 줄로 이루어져 있고, 길이가 0보다 크고 80보다 작은 문자열이 주어진다. 문자열은 O와 X만으로 이루어져 있다.
//https://www.acmicpc.net/problem/8958
//
//*/