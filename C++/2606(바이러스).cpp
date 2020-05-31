//#include <iostream>
//#define MAX 101
//
//using namespace std;
//
//int graph[MAX][MAX];
//int visit[MAX];
//int result = 0;
//
//void dfs(int start, int n)
//{
//	visit[start] = 1;
//
//	for (int i = 1;i <= n;i++)
//	{
//		if (graph[start][i] && !visit[i])
//		{
//			dfs(i, n);
//			result++;
//		}
//	}
//}
//
//int main()
//{
//	int c1, c2;
//	int n, m;
//	cin >> n >> m;
//
//	for (int i = 0;i < m;i++)
//	{
//		cin >> c1 >> c2;
//		graph[c1][c2] = 1;
//		graph[c2][c1] = 1;
//	}
//
//	dfs(1, n);
//
//	cout << result << "\n";
//
//	return 0;
//}
//
///*
//
//ù° �ٿ��� ��ǻ���� ���� �־�����. ��ǻ���� ���� 100 �����̰� �� ��ǻ�Ϳ��� 1�� ���� ���ʴ�� ��ȣ�� �Ű�����. ��° �ٿ��� ��Ʈ��ũ �󿡼� ���� ����Ǿ� �ִ� ��ǻ�� ���� ���� �־�����. �̾ �� ����ŭ �� �ٿ� �� �־� ��Ʈ��ũ �󿡼� ���� ����Ǿ� �ִ� ��ǻ���� ��ȣ ���� �־�����.
//1�� ��ǻ�Ͱ� �� ���̷����� �ɷ��� ��, 1�� ��ǻ�͸� ���� �� ���̷����� �ɸ��� �Ǵ� ��ǻ���� ���� ù° �ٿ� ����Ѵ�.
//
//https://www.acmicpc.net/problem/2606
//
//*/