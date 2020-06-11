//#include <iostream>
//#include <string.h>
//
//using namespace std;
//
//int dx[4] = { 0,-1,0,1 };
//int dy[4] = { -1,0,1,0 };
//
//int ground[51][51];
//int visit[51][51];
//
//void dfs(int x, int y,int w, int h)
//{
//	visit[y][x] = 1;
//
//	for (int i = 0;i < 4;i++)
//	{
//		int x2 = x + dx[i];
//		int y2 = y + dy[i];
//
//		if (x2 > 0 || x2 < w || y2>0 || y2 < h)
//		{
//			if (ground[y2][x2] && !visit[y2][x2])
//				dfs(x2, y2, w, h);
//		}
//	}
//}
//
//int main()
//{
//	int tc;
//	cin >> tc;
//
//	for (int i = 0;i < tc;i++)
//	{
//		memset(ground,0,sizeof(ground));		// ground �迭 �ʱ�ȭ
//		memset(visit,0,sizeof(visit));			// visit �迭 �ʱ�ȭ
//		int x, y;
//		int w, h, k;
//		int result = 0;
//		cin >> w >> h >> k;
//
//		for (int i = 0;i < k;i++)
//		{
//			cin >> x >> y;
//			ground[y][x] = 1;
//		}
//
//		for (int i = 0;i < h;i++)
//		{
//			for (int j = 0; j < w;j++)
//			{
//				if (ground[i][j] && !visit[i][j])
//				{
//					dfs(j, i, w, h);
//					result++;
//				}
//			}
//		}
//
//		cout << result << "\n";
//
//	}
//
//	return 0;
//}
//
///*
//
//�Է��� ù �ٿ��� �׽�Ʈ ���̽��� ���� T�� �־�����. �� ���� �ٺ��� ������ �׽�Ʈ ���̽��� ���� ù° �ٿ��� ���߸� ���� ���߹��� ���α��� M(1 �� M �� 50)�� ���α��� N(1 �� N �� 50), �׸��� ���߰� �ɾ��� �ִ� ��ġ�� ���� K(1 �� K �� 2500)�� �־�����. �� ���� K�ٿ��� ������ ��ġ X(0 �� X �� M-1), Y(0 �� Y �� N-1)�� �־�����.
//�� �׽�Ʈ ���̽��� ���� �ʿ��� �ּ��� ������������ ���� ���� ����Ѵ�.
//
//https://www.acmicpc.net/problem/1012
//
//������ ���� ����
//
//*/