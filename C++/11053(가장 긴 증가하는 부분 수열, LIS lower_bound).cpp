//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	vector<int> v;
//	vector<int> LIS;
//
//	int num;
//	int n;
//	cin >> n;
//
//	for (int i = 0;i < n;i++)
//	{
//		cin >> num;
//		v.push_back(num);
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
//LIS �⺻ ����
//1965���̶� ����
//
//https://www.acmicpc.net/problem/11053
//
//*/