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
//첫째 줄에는 컴퓨터의 수가 주어진다. 컴퓨터의 수는 100 이하이고 각 컴퓨터에는 1번 부터 차례대로 번호가 매겨진다. 둘째 줄에는 네트워크 상에서 직접 연결되어 있는 컴퓨터 쌍의 수가 주어진다. 이어서 그 수만큼 한 줄에 한 쌍씩 네트워크 상에서 직접 연결되어 있는 컴퓨터의 번호 쌍이 주어진다.
//1번 컴퓨터가 웜 바이러스에 걸렸을 때, 1번 컴퓨터를 통해 웜 바이러스에 걸리게 되는 컴퓨터의 수를 첫째 줄에 출력한다.
//
//https://www.acmicpc.net/problem/2606
//
//*/