//#include <iostream>
//#include <queue>
//#include <algorithm>
//
//const int MAX = 1001;
//
//int graph[MAX][MAX];
//int visit[MAX];
//
//using namespace std;
//
//void dfs(int start, int n)
//{
//	cout << start << " ";
//	visit[start] = 1;
//
//	for (int i = 1;i <= n;i++)
//	{
//		if (graph[start][i] && !visit[i])
//		{
//			dfs(i, n);
//			
//		}
//	}
//}
//
//void bfs(int start, int n)
//{
//	queue<int> q;
//	q.push(start);
//	visit[start] = 1;
//
//	while (!q.empty())
//	{
//		int index = q.front();
//		q.pop();
//		cout << index << " ";	
//
//		for (int i = 1;i <=n;i++)
//		{
//			if (graph[index][i] && !visit[i])
//			{
//				q.push(i);
//				visit[i] = 1;
//			}
//		}
//	}
//}
//
//int main()
//{
//	cin.tie(nullptr);
//	ios_base::sync_with_stdio(false);
//
//	int v1, v2;
//	int n, m, start;
//	cin >> n >> m >> start;
//
//	for (int i = 0;i <=n;i++)
//	{
//		for (int j = 0;j <= n;j++)
//			graph[i][j] = 0;
//	}
//
//	for (int i = 0;i < m;i++)
//	{
//		cin >> v1 >> v2;
//
//		graph[v1][v2] = 1;
//		graph[v2][v1] = 1;
//	}
//
//	visit[start] = 1;
//
//	dfs(start,n);
//	cout << "\n";
//
//	fill(visit, visit + n + 1, 0);
//
//	bfs(start, n);
//	cout << "\n";
//
//	return 0;
//}
//
///*
//
//�׷����� DFS�� Ž���� ����� BFS�� Ž���� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. ��, �湮�� �� �ִ� ������ ���� ���� ��쿡�� ���� ��ȣ�� ���� ���� ���� �湮�ϰ�, �� �̻� �湮�� �� �ִ� ���� ���� ��� �����Ѵ�. ���� ��ȣ�� 1������ N�������̴�.
//
//ù° �ٿ� ������ ���� N(1 �� N �� 1,000), ������ ���� M(1 �� M �� 10,000), Ž���� ������ ������ ��ȣ V�� �־�����. ���� M���� �ٿ��� ������ �����ϴ� �� ������ ��ȣ�� �־�����. � �� ���� ���̿� ���� ���� ������ ���� �� �ִ�. �Է����� �־����� ������ ������̴�.
//
//https://www.acmicpc.net/problem/1260
//
//*/