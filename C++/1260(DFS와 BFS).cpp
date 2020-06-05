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
//그래프를 DFS로 탐색한 결과와 BFS로 탐색한 결과를 출력하는 프로그램을 작성하시오. 단, 방문할 수 있는 정점이 여러 개인 경우에는 정점 번호가 작은 것을 먼저 방문하고, 더 이상 방문할 수 있는 점이 없는 경우 종료한다. 정점 번호는 1번부터 N번까지이다.
//
//첫째 줄에 정점의 개수 N(1 ≤ N ≤ 1,000), 간선의 개수 M(1 ≤ M ≤ 10,000), 탐색을 시작할 정점의 번호 V가 주어진다. 다음 M개의 줄에는 간선이 연결하는 두 정점의 번호가 주어진다. 어떤 두 정점 사이에 여러 개의 간선이 있을 수 있다. 입력으로 주어지는 간선은 양방향이다.
//
//https://www.acmicpc.net/problem/1260
//
//*/