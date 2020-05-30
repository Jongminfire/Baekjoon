//#include <vector>
//#include <iostream>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//bool dic(string a, string b)
//{
//	for (int i = 0;i < a.size();i++)
//	{
//			if (a[i] < b[i])
//				return true;
//			else if (a[i] > b[i])
//				return false;
//	}
//
//	return true;
//}
//
//bool cmp(string a, string b)
//{
//	int sum_a = -1;
//	int sum_b = -1;
//
//	if (a.size() < b.size())
//		return true;
//	else if(a.size() > b.size())
//		return false;
//	else
//	{
//		for (int i = 0;i < a.size();i++)
//		{
//			if (a[i] >= '0' && a[i] <= '9')
//				sum_a += (a[i] - '0');
//			if (b[i] >= '0' && b[i] <= '9')
//				sum_b += (b[i] - '0');
//		}
//
//		if (sum_a < sum_b)
//			return true;
//		else if (sum_a > sum_b)
//			return false;
//		else
//			return dic(a, b);
//	}
//}
//
//int main()
//{
//	int N;
//	cin >> N;
//
//	vector<string> s(N);
//
//	for (int i = 0;i < N;i++)
//	{
//		cin >> s[i];
//	}
//
//	sort(s.begin(), s.end(), cmp);
//
//	for (int i = 0;i < N;i++)
//	{
//		cout << s[i] << "\n";
//	}
//
//	return 0;
//}
//
///*
//
//첫째 줄에 기타의 개수 N이 주어진다. N은 1,000보다 작거나 같다. 둘째 줄부터 N개의 줄에 시리얼 번호가 하나씩 주어진다. 시리얼 번호의 길이는 최대 50이고, 알파벳 대문자 또는 숫자로만 이루어져 있다. 시리얼 번호는 중복되지 않는다.
//
//https://www.acmicpc.net/problem/1431
//
//*/