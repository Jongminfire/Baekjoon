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
//	priority_queue<int, deque<int>, less<int>> pq;
//	int N;
//	int insert;
//	cin >> N;
//
//	for (int i = 0;i < N;i++)
//	{
//		cin >> insert;
//		pq.push(insert);
//
//		priority_queue<int, deque<int>, less<int>> copy = pq;
//
//		for (int i = 0; i < pq.size()/2 ;i++)
//		{
//			copy.pop();
//		}
//		
//		cout << copy.top() << "\n";
//	}
//
//	return 0;
//}