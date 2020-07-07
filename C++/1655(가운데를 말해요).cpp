//#include <iostream>
//#include <queue>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	cin.tie(nullptr);
//	ios_base::sync_with_stdio(false);
//
//	priority_queue<int, deque<int>, greater<int>> gpq;
//	priority_queue<int, deque<int>, less<int>> lpq;
//
//	int N;
//	int num;
//	cin >> N;
//
//	for (int i = 0;i < N;i++)
//	{
//		cin >> num;
//
//		if (lpq.size() == gpq.size())		//lq와 gq에 반반씩 수를 넣음
//			lpq.push(num);
//		else
//			gpq.push(num);
//
//		if(!gpq.empty() && !lpq.empty())
//			if (lpq.top() >= gpq.top())		//만약 중간값 (lq의 top, gq의 top)이 lq가 더 크다면 둘을 교환
//			{
//				gpq.push(lpq.top());
//				lpq.push(gpq.top());
//				lpq.pop();
//				gpq.pop();
//			}
//
//		cout << lpq.top()<<"\n";			// 중간값중 작은 것을 출력하므로 lpq.top 출력
//	}
//
//	return 0;
//}
//
///*
//
//https://www.acmicpc.net/problem/1655
//
//max heap과 min heap으로 중간수 찾는 것
//priority queue를 하나만 쓰면 시간초과 남
//
//*/