//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//int graph[101][101];
//int result[101][101];
//
//bool bfs(int start, int end,int n)
//{
//	queue<int> q;
//	bool *visit = new bool[n]();
//	int result = 0;
//	q.push(start);
//
//	if (start != end)
//		visit[start] = true;
//
//	while (!q.empty())
//	{
//		int index = q.front();
//		q.pop();
//
//		for (int i = 0;i < n;i++)
//		{
//			if (graph[index][i] == 1 && !visit[i])
//			{
//				q.push(i);
//				visit[i] = true;
//			}
//		}
//	}
//
//	if (visit[start] == 1 && visit[end] == 1)
//		return true;
//	else
//		return false;
//}
//
//int main()
//{
//	int n,num;
//	cin >> n;
//
//	for (int y = 0;y < n;y++)
//	{
//		for (int x = 0; x < n; x++)
//		{
//			cin >> num;
//			
//			if (num == 1)
//			{
//				graph[y][x] = 1;
//			}
//		}
//	}
//
//	for (int y = 0;y < n;y++)
//	{
//		for (int x = 0;x < n;x++)
//		{
//			if (bfs(y,x,n))
//			{
//				result[y][x] = 1;
//			}
//		}
//	}
//
//	for (int y = 0;y < n;y++)
//	{
//		for (int x = 0;x < n;x++)
//		{
//			cout << result[y][x] << " ";
//		}
//
//		cout << "\n";
//	}
//
//	return 0;
//}
//
///*
//
//문제
//가중치 없는 방향 그래프 G가 주어졌을 때, 모든 정점 (i, j)에 대해서, i에서 j로 가는 경로가 있는지 없는지 구하는 프로그램을 작성하시오.
//
//입력
//첫째 줄에 정점의 개수 N (1 ≤ N ≤ 100)이 주어진다. 둘째 줄부터 N개 줄에는 그래프의 인접 행렬이 주어진다. i번째 줄의 j번째 숫자가 1인 경우에는 i에서 j로 가는 간선이 존재한다는 뜻이고, 0인 경우는 없다는 뜻이다. i번째 줄의 i번째 숫자는 항상 0이다.
//
//출력
//총 N개의 줄에 걸쳐서 문제의 정답을 인접행렬 형식으로 출력한다. 정점 i에서 j로 가는 경로가 있으면 i번째 줄의 j번째 숫자를 1로, 없으면 0으로 출력해야 한다.
//
//https://www.acmicpc.net/problem/11403
//
//BFS문제
//*/