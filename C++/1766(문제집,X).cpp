//#include <iostream>
//#include <queue>
//#include <map>
//
//using namespace std;
//
//int main()
//{
//	vector < priority_queue<int, deque<int>, greater<int>>> v;
//	int N, M;
//	int insert;
//	cin >> N >> M;
//
//	v.resize(M);
//
//	for (int i = 0;i < N / M;i++)
//	{
//		for (int j = 0; j < M;j++)
//		{
//			cin >> insert;
//			v[j].push(insert);
//		}
//	}
//
//	for (int i = 0;i < M;i++)
//	{
//		for (int j = 0;j < N / M;j++)
//		{
//			if (v[i].empty())
//				break;
//			else
//			{
//				cout << v[i].top() << " ";
//				v[i].pop();
//			}
//		}
//	}
//
//
//	return 0;
//}
//
//// 문제 다시이해