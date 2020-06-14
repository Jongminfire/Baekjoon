//#include <iostream>
//#include <map>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	int a, b;
//	int count = 0;
//	int n;
//	cin >> n;
//
//	map<int, int> m;
//	vector<int> v;
//
//	for (int i = 0;i < n;i++)
//	{
//		cin >> a >> b;
//		m.insert(make_pair(a, b));
//	}
//
//	for (int i = 0;i < n;i++)
//	{
//		int find = m.begin()->second;
//
//		auto it = lower_bound(v.begin(), v.end(),find);
//		
//		if (it != v.end())
//			*it = find;
//		else
//			v.push_back(find);
//
//		m.erase(m.begin());
//	}
//
//	cout << n-v.size() << "\n";
//	
//	return 0;
//}
//
///*
//
//LIS����.
//map���� �����ѵ� second ������ LIS�� ����
//
//https://www.acmicpc.net/problem/2565
//
//*/