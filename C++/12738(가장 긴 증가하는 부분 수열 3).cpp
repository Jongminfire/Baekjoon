//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
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
//LIS 문제
//11053이랑 코드 같음
//
//https://www.acmicpc.net/problem/12015
//
//*/