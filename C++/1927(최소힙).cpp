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
//	priority_queue<int, deque<int>, greater<int>> pq;
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
//				cout << pq.top() << "\n";
//				pq.pop();
//			}
//		}
//
//		else
//			pq.push(insert);
//	}
//
//	return 0;
//}
//
///*
//
//�θ� �� �˷��� �ڷᱸ�� �� �ּ� ���̶�� ���� �ִ�. �ּ� ���� �̿��Ͽ� ������ ���� ������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//�迭�� �ڿ��� x�� �ִ´�.
//�迭���� ���� ���� ���� ����ϰ�, �� ���� �迭���� �����Ѵ�.
//���α׷��� ó���� ����ִ� �迭���� �����ϰ� �ȴ�.
//
//https://www.acmicpc.net/problem/1927
//
//*/