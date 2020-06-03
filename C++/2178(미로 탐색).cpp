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
//�̷ο��� 1�� �̵��� �� �ִ� ĭ�� ��Ÿ����, 0�� �̵��� �� ���� ĭ�� ��Ÿ����. �̷��� �̷ΰ� �־����� ��, (1, 1)���� ����Ͽ� (N, M)�� ��ġ�� �̵��� �� ������ �ϴ� �ּ��� ĭ ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. �� ĭ���� �ٸ� ĭ���� �̵��� ��, ���� ������ ĭ���θ� �̵��� �� �ִ�.
//���� �������� 15ĭ�� ������ (N, M)�� ��ġ�� �̵��� �� �ִ�. ĭ�� �� ������ ���� ��ġ�� ���� ��ġ�� �����Ѵ�.
//
//ù° �ٿ� �� ���� N, M(2 �� N, M �� 100)�� �־�����. ���� N���� �ٿ��� M���� ������ �̷ΰ� �־�����. ������ ������ �پ �Է����� �־�����.
//
//ù° �ٿ� ������ �ϴ� �ּ��� ĭ ���� ����Ѵ�. �׻� ������ġ�� �̵��� �� �ִ� ��츸 �Է����� �־�����.
//
//https://www.acmicpc.net/problem/2178
//
//BFS�� �ִܰŸ� ã�¹���
//
//*/