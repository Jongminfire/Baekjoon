//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//bool cmp(string a, string b)
//{
//	if (a.size() < b.size())
//		return true;
//	else if (a.size() == b.size())
//	{
//		int index = 0;
//
//		while (index!=a.size())
//		{
//			if ((int)a[index] < (int)b[index])
//				return true;
//			else if ((int)a[index] > (int)b[index])
//				return false;
//			else
//				index++;
//		}
//
//		return false;
//	}
//	else
//		return false;
//}
//
//int main()
//{
//	int N;
//	cin >> N;
//
//	vector<string> v(N);
//
//	for (int i = 0;i < N;i++)
//	{
//		cin >> v[i];
//	}
//
//	sort(v.begin(), v.end(), cmp);
//
//	for (int i = 0; i < N; i++)
//	{
//		if (i == 0)
//			cout << v[i] << "\n";
//		else
//			if (v[i] != v[i - 1])
//				cout << v[i] << "\n";
//	}
//
//	return 0;
//}
//
///*
//
//알파벳 소문자로 이루어진 N개의 단어가 들어오면 아래와 같은 조건에 따라 정렬하는 프로그램을 작성하시오.
//
//1.길이가 짧은 것부터
//2.길이가 같으면 사전 순으로
//
//https://www.acmicpc.net/problem/1181
//
//*/