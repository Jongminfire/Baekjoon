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
//ù° �ٿ� N(1 �� N �� 1,500)�� �־�����. ���� N���� �ٿ��� �� �ٸ��� N���� ���� �־�����. ǥ�� ���� ���� -10�ﺸ�� ũ�ų� ����, 10�ﺸ�� �۰ų� ���� �����̴�.
//
//https://www.acmicpc.net/problem/2075
//
//*/