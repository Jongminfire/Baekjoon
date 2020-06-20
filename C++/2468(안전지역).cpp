//#include <iostream>
//#include <string.h>
//
//using namespace std;
//
//int dx[4] = { 0,-1,0,1 };
//int dy[4] = { -1,0,1,0 };
//
//int ground[101][101];
//bool visit[101][101];
//
//void dfs(int x, int y, int size, int h)
//{
//	visit[y][x] = true;
//
//	for (int i = 0;i < 4;i++)
//	{
//		int x2 = x + dx[i];
//		int y2 = y + dy[i];
//
//		if (x2 >= 0 && x2 < size && y2>=0 && y2 < size)
//		{
//			if (ground[y2][x2] > h && !visit[y2][x2])
//			{
//				dfs(x2, y2, size, h);
//			}
//		}
//	}
//}
//
//int main()
//{
//	int result = 0;
//	int min = 101;
//	int max = 0;
//	int size;
//	cin >> size;
//
//	for (int y = 0;y < size;y++)
//	{
//		for (int x = 0;x < size;x++)
//		{
//			cin >> ground[y][x];
//
//			if (ground[y][x] > max)
//				max = ground[y][x];
//			if (ground[y][x] < min)
//				min = ground[y][x];
//		}
//	}
//
//	for (int h = min-1; h <max ; h++)
//	{
//		int count = 0;
//		memset(visit, false, sizeof(visit));
//
//		for (int y = 0;y < size;y++)
//		{
//			for (int x = 0;x < size;x++)
//			{
//				if (ground[y][x] > h && !visit[y][x])
//				{
//					dfs(x, y, size, h);
//					count++;
//				}
//			}
//		}
//
//		if (count > result)
//		{
//			result = count;
//		}
//	}
//
//	cout << result << "\n";
//
//	return 0;
//}
//
///*
//
//ù° �ٿ��� � ������ ��Ÿ���� 2���� �迭�� ��� ���� ������ ��Ÿ���� �� N�� �Էµȴ�. N�� 2 �̻� 100 ������ �����̴�. ��° �ٺ��� N���� �� �ٿ��� 2���� �迭�� ù ��° ����� N��° ����� ������� �� �྿ ���� ������ �Էµȴ�. �� �ٿ��� �� ���� ù ��° ������ N��° ������ N���� ���� ������ ��Ÿ���� �ڿ����� �� ĭ�� ���̿� �ΰ� �Էµȴ�. ���̴� 1�̻� 100 ������ �����̴�.
//ù° �ٿ� �帶ö�� ���� ����� �ʴ� ������ ������ �ִ� ������ ����Ѵ�.
//
//https://www.acmicpc.net/problem/2468
//
//*/