//#include <iostream>
//#define MAX 1001
//
//int graph[MAX][MAX];
//int visit[MAX];
//
//using namespace std;
//
//void dfs(int start, int n)
//{
//	visit[start] = 1;
//
//	for (int i = 1;i <= n;i++)
//	{
//		if (graph[start][i] && !visit[i])
//			dfs(i, n);
//	}
//}
//
//int main()
//{
//	int v1, v2;
//	int N, M;
//	int result = 0;
//	cin >> N >> M;
//
//	for (int i = 0;i <= N;i++)
//	{
//		for (int j = 0;j <= N;j++)
//			graph[i][j] = 0;
//
//		visit[i] = 0;
//	}
//
//	for (int i = 0;i < M;i++)
//	{
//		cin >> v1 >> v2;
//		graph[v1][v2] = 1;
//		graph[v2][v1] = 1;
//	}
//
//	for (int i = 1;i <= N;i++)
//	{
//		if (!visit[i])
//		{
//			dfs(i, N);
//			result++;
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
//방향 없는 그래프가 주어졌을 때, 연결 요소 (Connected Component)의 개수를 구하는 프로그램을 작성하시오.
//첫째 줄에 정점의 개수 N과 간선의 개수 M이 주어진다. (1 ≤ N ≤ 1,000, 0 ≤ M ≤ N×(N-1)/2) 둘째 줄부터 M개의 줄에 간선의 양 끝점 u와 v가 주어진다. (1 ≤ u, v ≤ N, u ≠ v) 같은 간선은 한 번만 주어진다.
//첫째 줄에 연결 요소의 개수를 출력한다.
//
//https://www.acmicpc.net/problem/11724
//
//(연결요소 : https://velog.io/@kjh107704/%EA%B7%B8%EB%9E%98%ED%94%84-%EC%97%B0%EA%B2%B0-%EC%9A%94%EC%86%8C)
//
//*/