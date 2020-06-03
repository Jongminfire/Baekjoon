//#include <iostream>
//#include <queue>
//#include <utility>
//#include <string.h>
//
//int dx[4] = { 0,-1,0,1 };
//int dy[4] = { -1,0,1,0 };
//
//int graph[101][101];
//int visit[101][101];
//int dist[101][101];
//
//using namespace std;
//
//void bfs(int x,int y,int h, int w)
//{
//	queue <pair<int, int>> q;
//	q.push(make_pair(x, y));
//	visit[y][x] = 1;
//
//	while (!q.empty())
//	{
//		pair<int, int> index = q.front();
//		q.pop();
//
//		for (int i = 0;i < 4;i++)
//		{
//			int x2 = index.first + dx[i];
//			int y2 = index.second + dy[i];
//
//			if (x2 >= 0 && x2 < w && y2 >= 0 && y2 < h && !visit[y2][x2] && graph[y2][x2])
//			{
//				q.push(make_pair(x2, y2));
//				visit[y2][x2] = 1;
//				dist[y2][x2] = dist[index.second][index.first] + 1;
//			}
//		}
//	}
//}
//
//int main()
//{
//	char num;
//	int n, m;
//	cin >> n >> m;
//
//	for (int y = 0;y < n;y++)
//	{
//		for (int x = 0;x < m;x++)
//		{
//			cin >> num;
//			graph[y][x] = atoi(&num);
//		}
//	}
//
//	memset(dist, 0, sizeof(dist));
//
//	bfs(0, 0, n, m);
//
//	cout << dist[n-1][m-1]+1 << "\n";
//
//	return 0;
//}
//
///*
//
//미로에서 1은 이동할 수 있는 칸을 나타내고, 0은 이동할 수 없는 칸을 나타낸다. 이러한 미로가 주어졌을 때, (1, 1)에서 출발하여 (N, M)의 위치로 이동할 때 지나야 하는 최소의 칸 수를 구하는 프로그램을 작성하시오. 한 칸에서 다른 칸으로 이동할 때, 서로 인접한 칸으로만 이동할 수 있다.
//위의 예에서는 15칸을 지나야 (N, M)의 위치로 이동할 수 있다. 칸을 셀 때에는 시작 위치와 도착 위치도 포함한다.
//
//첫째 줄에 두 정수 N, M(2 ≤ N, M ≤ 100)이 주어진다. 다음 N개의 줄에는 M개의 정수로 미로가 주어진다. 각각의 수들은 붙어서 입력으로 주어진다.
//
//첫째 줄에 지나야 하는 최소의 칸 수를 출력한다. 항상 도착위치로 이동할 수 있는 경우만 입력으로 주어진다.
//
//https://www.acmicpc.net/problem/2178
//
//BFS로 최단거리 찾는문제
//
//*/