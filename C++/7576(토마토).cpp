//#include <iostream>
//#include <queue>
//#include <utility>
//
//using namespace std;
//
//int dx[4] = { 0,-1,0,1 };
//int dy[4] = { -1,0,1,0 };
//
//long long box[1001][1001];
//queue<pair<int, int>> q;
//
//void bfs(int w, int h)
//{
//	pair<int, int> index;
//
//	while (!q.empty())
//	{
//		index = q.front();
//		q.pop();
//
//		for (int i = 0;i < 4;i++)
//		{
//			int x2 = index.first + dx[i];
//			int y2 = index.second + dy[i];
//
//			if (x2 < 0 || x2 >= w || y2 < 0 || y2 >= h) continue;
//			if (box[y2][x2] != 0) continue;
//
//			q.push(make_pair(x2, y2));
//
//			box[y2][x2] = box[index.second][index.first] + 1;
//		}
//	}
//
//}
//
//int main()
//{
//	long long max_num = 0;
//	int n, m;
//	cin >> n >> m;
//
//	for (int y = 0;y < m;y++)
//	{
//		for (int x = 0;x < n;x++)
//		{
//			cin >> box[y][x];
//
//			if (box[y][x] == 1)
//				q.push(make_pair(x, y));
//		}
//	}
//
//	bfs(n, m);
//
//	for (int y = 0;y < m;y++)
//	{
//		for (int x = 0;x < n;x++)
//		{
//			max_num = max(max_num, box[y][x]);
//
//			if (box[y][x] == 0)
//			{
//				cout << "-1\n";
//				return 0;
//			}
//		}
//	}
//
//	cout << max_num - 1 << "\n";
//
//	return 0;
//}
//
///*
//
//https://www.acmicpc.net/problem/11403
//
//동시에 BFS하는 문제 (문제 해설)
//
//*/