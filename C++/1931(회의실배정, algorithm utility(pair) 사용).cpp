//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <utility>
//
//using namespace std;
//
//bool compare(pair<int, int>a, pair<int, int>b)
//{
//	if (a.second < b.second)					// a의 끝나는 시간과 b의 끝나는 시간을 비교해서 a.second<b.second가 되게.
//		return true;
//	else if (a.second == b.second)				// 두 회의가 같이 끝나는 경우 먼저 시작하는 회의 순으로 정렬
//		return a.first < b.first;
//	else
//		return false;
//}
//
//int main()
//{
//	int N;
//	cin >> N;
//
//	vector<pair<int,int>> c(N);
//
//	for (int i = 0;i < N;i++)
//	{
//		cin >> c[i].first >> c[i].second;
//	}
//
//	sort(c.begin(), c.end(),compare);
//
//	int now = 0;
//	int count = 1;
//
//	for (int i = 1;i < N;i++)
//	{
//		if (c[now].second <= c[i].first)				// 반례: 4개의 회의실, ([1 1],[1 1],[1 1],[1 1])은 4개가 가능하므로 <에서 <=로 바꿔주었음
//		{
//			now = i;
//			count++;
//		}
//	}
//
//	cout << count;
//
//	return 0;
//}
//
///*
//첫째 줄에 회의의 수 N(1 ≤ N ≤ 100,000)이 주어진다. 둘째 줄부터 N+1 줄까지 각 회의의 정보가 주어지는데 이것은 공백을 사이에 두고 회의의 시작시간과 끝나는 시간이 주어진다. 시작 시간과 끝나는 시간은 231-1보다 작거나 같은 자연수 또는 0이다.
//
//https://www.acmicpc.net/problem/1931
//*/