//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//int main()
//{
//	cin.tie(nullptr);
//	ios_base::sync_with_stdio(false);
//
//	priority_queue<int, vector<int>, greater<int>> pq;
//
//	int N;
//	int insert;
//	cin >> N;
//
//	for (int i = 0;i < N*N;i++)
//	{
//		cin >> insert;
//		pq.push(insert);
//
//		if (pq.size() == N+1)
//			pq.pop();
//	}
//
//	cout << pq.top() << "\n";
//	
//	return 0;
//}
//
///*
//
//첫째 줄에 N(1 ≤ N ≤ 1,500)이 주어진다. 다음 N개의 줄에는 각 줄마다 N개의 수가 주어진다. 표에 적힌 수는 -10억보다 크거나 같고, 10억보다 작거나 같은 정수이다.
//
//https://www.acmicpc.net/problem/2075
//
//*/