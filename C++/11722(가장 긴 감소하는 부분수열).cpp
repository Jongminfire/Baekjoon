//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	deque<int> q;
//	vector<int> LIS;
//
//	int num;
//	int n;
//	cin >> n;
//
//	for (int i = 0;i < n;i++)
//	{
//		cin >> num;
//		q.push_front(num);
//	}
//
//	while(!q.empty())
//	{
//		int find = q.front();
//		q.pop_front();
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
//LIS문제 vector대신 deque로 역순으로 찾았음
//
//https://www.acmicpc.net/problem/11722
//
//*/