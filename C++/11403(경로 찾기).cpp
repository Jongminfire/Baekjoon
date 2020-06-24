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
//����
//����ġ ���� ���� �׷��� G�� �־����� ��, ��� ���� (i, j)�� ���ؼ�, i���� j�� ���� ��ΰ� �ִ��� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//�Է�
//ù° �ٿ� ������ ���� N (1 �� N �� 100)�� �־�����. ��° �ٺ��� N�� �ٿ��� �׷����� ���� ����� �־�����. i��° ���� j��° ���ڰ� 1�� ��쿡�� i���� j�� ���� ������ �����Ѵٴ� ���̰�, 0�� ���� ���ٴ� ���̴�. i��° ���� i��° ���ڴ� �׻� 0�̴�.
//
//���
//�� N���� �ٿ� ���ļ� ������ ������ ������� �������� ����Ѵ�. ���� i���� j�� ���� ��ΰ� ������ i��° ���� j��° ���ڸ� 1��, ������ 0���� ����ؾ� �Ѵ�.
//
//https://www.acmicpc.net/problem/11403
//
//BFS����
//*/