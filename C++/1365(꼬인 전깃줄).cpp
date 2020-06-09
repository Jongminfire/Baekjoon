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
//	cout << n-LIS.size() << "\n";
//
//	return 0;
//}
//
///*
//
//LIS문제
//
//전체에서 LIS 사이즈 만큼 뺀값으로 제거해야 할 전기줄 출력
//
//https://www.acmicpc.net/problem/1365
//
//*/