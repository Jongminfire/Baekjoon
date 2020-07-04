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
//���ϻ����� �ƴ� ����� ���� �� ������ ���� �� 4���̴�. (���� 2, �Ķ� 1, �ʷ� 1) ������, ���ϻ����� ����� ������ 3�� �� �� �ִ�. (����-�ʷ� 2, �Ķ� 1)
//�׸��� �Է����� �־����� ��, ���ϻ����� ����� ���� ���� �ƴ� ����� ���� �� ������ ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//ù° �ٿ� N�� �־�����. (1 �� N �� 100)
//��° �ٺ��� N�� �ٿ��� �׸��� �־�����.
//
//���ϻ����� �ƴ� ����� ���� ���� ������ ������ ���ϻ����� ����� ���� ���� ������ ���� �������� ������ ����Ѵ�.
//
//https://www.acmicpc.net/problem/10026
//
//dfs 2�� ���� (�ʷ�-����, �Ķ�) �� (�ʷ�,����,�Ķ�) ���
//
//*/