//#include <iostream>
//#include <string.h>
//
//using namespace std;
//
//int dx[4] = { 0,-1,0,1 };
//int dy[4] = { -1,0,1,0 };
//
//char pic[101][101];
//int visit[101][101];
//int visit2[101][101];
//
//void dfs(int x, int y, int N, char color)
//{
//	visit[y][x] = 1;
//
//	for (int i = 0;i < 4;i++)
//	{
//		int x2 = x + dx[i];
//		int y2 = y + dy[i];
//
//		if (x2 > 0 || x2 < N || y2>0 || y2 < N)
//		{
//			if (pic[y2][x2]== color && !visit[y2][x2])
//			{
//				dfs(x2, y2, N, color);
//			}
//		}
//	}
//}
//
//void dfs2(int x, int y, int N, char color)
//{
//	visit2[y][x] = 1;
//
//	for (int i = 0;i < 4;i++)
//	{
//		int x2 = x + dx[i];
//		int y2 = y + dy[i];
//
//		if (x2 > 0 || x2 < N || y2>0 || y2 < N)
//		{
//			if (!visit2[y2][x2])
//			{
//				if (color == 'B')
//				{
//					if (pic[y2][x2] == color)
//						dfs2(x2, y2, N, color);
//				}
//				else
//				{
//					if (pic[y2][x2] == 'R' || pic[y2][x2] == 'G')
//						dfs2(x2, y2, N, color);
//				}
//			}
//		}
//	}
//}
//
//int main()
//{
//	int ans1 = 0;
//	int ans2 = 0;
//
//	int N;
//	cin >> N;
//
//	memset(pic, NULL, sizeof(pic));
//
//	for (int y = 0; y < N; y++)
//	{
//		for (int x = 0; x < N; x++)
//		{
//			char rgb;
//			cin >> rgb;
//
//			pic[y][x] = rgb;
//		}
//	}
//
//	for (int y = 0; y < N; y++)
//	{
//		for (int x = 0; x < N; x++)
//		{
//			if (!visit[y][x])
//			{
//				dfs(x, y, N,pic[y][x]);
//				ans1++;
//			}
//
//			if (!visit2[y][x])
//			{
//				dfs2(x, y, N,pic[y][x]);
//				ans2++;
//			}
//		}
//	}
//
//	cout << ans1 << " " << ans2 << "\n";
//
//	return 0;
//}
//
///*
//
//적록색약이 아닌 사람이 봤을 때 구역의 수는 총 4개이다. (빨강 2, 파랑 1, 초록 1) 하지만, 적록색약인 사람은 구역을 3개 볼 수 있다. (빨강-초록 2, 파랑 1)
//그림이 입력으로 주어졌을 때, 적록색약인 사람이 봤을 때와 아닌 사람이 봤을 때 구역의 수를 구하는 프로그램을 작성하시오.
//
//첫째 줄에 N이 주어진다. (1 ≤ N ≤ 100)
//둘째 줄부터 N개 줄에는 그림이 주어진다.
//
//적록색약이 아닌 사람이 봤을 때의 구역의 개수와 적록색약인 사람이 봤을 때의 구역의 수를 공백으로 구분해 출력한다.
//
//https://www.acmicpc.net/problem/10026
//
//dfs 2개 만들어서 (초록-빨강, 파랑) 과 (초록,빨강,파랑) 출력
//
//*/