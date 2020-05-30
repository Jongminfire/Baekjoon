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
//���� ���� ������ ���� ������ �����ϴ� �ڷᱸ���̴�.
//
//�迭�� ���� x (x �� 0)�� �ִ´�.
//�迭���� ������ ���� ���� ���� ����ϰ�, �� ���� �迭���� �����Ѵ�. ������ ���� ���� ���� �������� ����, ���� ���� ���� ����ϰ�, �� ���� �迭���� �����Ѵ�.
//���α׷��� ó���� ����ִ� �迭���� �����ϰ� �ȴ�.
//
//https://www.acmicpc.net/problem/11286
//
//pair ����ؼ� �����ϰ�� bool=false, -1 ���ؼ� ���
//
//*/