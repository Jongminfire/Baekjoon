//#include <iostream>
//#include <string.h>
//#include <algorithm>
//
//char graph[1001][1001];
//bool visit[1001][1001];
//
//int dx[9] = { -1,-1,-1,0,0,0,1,1,1};
//int dy[9] = { -1,0,1,-1,0,1 ,-1,0,1};
//
//using namespace std;
//
//void dfs(int x, int y, int h, int w)
//{
//	visit[y][x] = true;
//
//	for (int i = 0;i < 9;i++)
//	{
//		int x2 = x + dx[i];
//		int y2 = y + dy[i];
//
//		if (x2 < 0 || x2 >= w || y2 < 0 || y2 >= h) continue;
//		if (visit[y2][x2] || graph[y2][x2] != '@') continue;
//
//		dfs(x2, y2, h, w);
//	}
//	
//}
//
//int main()
//{
//	int n = 1;
//	int m = 1;
//
//	while (m != 0)
//	{
//		int count = 0;
//		cin >> n >> m;
//
//		if (m == 0)
//			break;
//
//		memset(graph, 0, sizeof(graph));
//		memset(visit, 0, sizeof(visit));
//
//		for (int y = 0;y < n;y++)
//		{
//			for (int x = 0;x < m;x++)
//			{
//				cin >> graph[y][x];
//			}
//		}
//
//		for (int y = 0;y < n;y++)
//		{
//			for (int x = 0;x < m;x++)
//			{
//				if (graph[y][x] == '@' && !visit[y][x])
//				{
//					dfs(x, y, n, m);
//					count++;
//				}
//			}
//		}
//
//		cout <<count << "\n";
//	}
//
//
//	return 0;
//}
//
///*
//
//The input file contains one or more grids. Each grid begins with a line containing m and n, the number of rows and columns in the grid, separated by a single space. If m = 0 it signals the end of the input; otherwise 1 ≤ m ≤ 100 and 1 ≤ n ≤ 100. Following this are m lines of n characters each (not counting the end-of-line characters). Each character corresponds to one plot, and is either ‘*’, representing the absence of oil, or ‘@’, representing an oil pocket.
//For each grid, output the number of distinct oil deposits. Two different pockets are part of the same oil deposit if they are adjacent horizontally, vertically, or diagonally. An oil deposit will not contain more than 100 pockets.
//
//https://www.acmicpc.net/problem/4677
//
//3x3 으로 dfs 하는 문제 (@영역의 개수)
//
//*/