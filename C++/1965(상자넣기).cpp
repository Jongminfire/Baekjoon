//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	vector<int> v(n);
//	vector<int> LIS;
//
//	for (int i = 0;i < n;i++)
//	{
//		cin >> v[i];
//	}
//
//	for (int i = 0;i < n;i++)
//	{
//		int find = v[i];
//
//		auto it = lower_bound(LIS.begin(), LIS.end(), find);
//
//		if (it == LIS.end())
//			LIS.push_back(find);
//		else
//			*it = find;
//	}
//
//	cout << LIS.size() << "\n";
//
//	return 0;
//}
//
///*
//
//LIS 기본 문제
//
//https://www.acmicpc.net/problem/1965
//
//*/
//
