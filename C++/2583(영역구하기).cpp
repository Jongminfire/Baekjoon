//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string.h>
//
//using namespace std;
//
//int dx[4] = { 0,-1,0,1 };
//int dy[4] = { -1,0,1,0 };
//
//int graph[101][101];
//int visit[101][101];
//
//int dfs(int x, int y, int w,int h, int count)
//{
//	visit[y][x] = 1;
//	count++;
//
//	for (int i = 0;i < 4;i++)
//	{
//		int x2 = x + dx[i];
//		int y2 = y + dy[i];
//
//		if (x2 >= 0 || x2 < w|| y2>=0 || y2 < h)
//		{
//			if (graph[y2][x2]==2 && !visit[y2][x2])
//				count = dfs(x2, y2, w,h, count);		// count 1�� �����ϹǷ�
//		}
//	}
//
//	return count;
//}
//
//int main()
//{
//	vector<int> v;
//	int px, py, px2, py2;
//	int n, m, k;
//	cin >> m >> n >> k;
//
//	memset(graph, -1, sizeof(graph));
//
//	for (int i = 0;i < k;i++)
//	{
//		cin >> px >> py >> px2 >> py2;
//
//		for(int y=0;y<py2-py;y++)
//			for (int x = 0;x < px2 - px;x++)
//			{
//				graph[m - py2 + y][n - px2 + x] = 1;
//			}
//	}
//
//	for(int y=0;y<m;y++)
//		for (int x = 0;x < n;x++)
//		{
//			if (graph[y][x] != 1)
//				graph[y][x] = 2;
//		}
//
//	for (int y = 0;y < m;y++)
//	{
//		for (int x = 0;x < n;x++)
//		{
//			if (graph[y][x]==2 && !visit[y][x])
//				v.push_back(dfs(x, y, n, m, 0));
//		}
//	}
//
//	sort(v.begin(), v.end());
//
//	cout << v.size() << "\n";
//
//	for (int i = 0;i < v.size();i++)
//	{
//		cout << v[i] << " ";
//	}
//	cout << "\n";
//
//	return 0;
//}
//
///*
//
//ù° �ٿ� M�� N, �׸��� K�� ��ĭ�� ���̿� �ΰ� ���ʷ� �־�����. M, N, K�� ��� 100 ������ �ڿ����̴�. ��° �ٺ��� K���� �ٿ��� �� �ٿ� �ϳ��� ���簢���� ���� �Ʒ� �������� x, y��ǥ���� ������ �� �������� x, y��ǥ���� ��ĭ�� ���̿� �ΰ� ���ʷ� �־�����. �������� ���� �Ʒ� �������� ��ǥ�� (0,0)�̰�, ������ �� �������� ��ǥ��(N,M)�̴�. �ԷµǴ� K���� ���簢������ ������ ��ü�� ä��� ���� ����.
//ù° �ٿ� �и��Ǿ� ���������� ������ ������ ����Ѵ�. ��° �ٿ��� �� ������ ���̸� ������������ �����Ͽ� ��ĭ�� ���̿� �ΰ� ����Ѵ�.
//
//https://www.acmicpc.net/problem/2583
//
//�Է� �޴� ��ǥ ������ �κ� ������ ã��
//*/