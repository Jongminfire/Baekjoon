//#include <iostream>
//#include <queue>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	cin.tie(nullptr);
//	ios_base::sync_with_stdio(false);
//
//	priority_queue<pair<int,bool>, deque<pair<int,bool>>, greater<pair<int,bool>>> pq;
//	vector<bool> m;
//
//	int N;
//	int insert;
//	cin >> N;
//
//	for (int i = 0;i < N;i++)
//	{
//		cin >> insert;
//
//		if (insert == 0)
//		{
//			if (pq.empty())
//				cout << "0\n";
//			else
//			{
//				if (pq.top().second)
//					cout << pq.top().first << "\n";
//				else
//					cout << pq.top().first * -1 << "\n";
//				pq.pop();
//			}
//		}
//
//		else
//		{
//			if (insert < 0)
//				pq.push(make_pair(abs(insert), false));
//			else
//				pq.push(make_pair(abs(insert), true));
//		}
//	}
//
//	return 0;
//}
//
///*
//
//절댓값 힙은 다음과 같은 연산을 지원하는 자료구조이다.
//
//배열에 정수 x (x ≠ 0)를 넣는다.
//배열에서 절댓값이 가장 작은 값을 출력하고, 그 값을 배열에서 제거한다. 절댓값이 가장 작은 값이 여러개일 때는, 가장 작은 수를 출력하고, 그 값을 배열에서 제거한다.
//프로그램은 처음에 비어있는 배열에서 시작하게 된다.
//
//https://www.acmicpc.net/problem/11286
//
//pair 사용해서 음수일경우 bool=false, -1 곱해서 출력
//
//*/