//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int dx[4] = { 0,-1,0,1 };
//int dy[4] = { -1,0,1,0 };
//
//int graph[26][26];
//int visit[26][26];
//
//int dfs(int x, int y, int size, int count)
//{
//	visit[y][x] = 1;
//	count++;
//
//	for (int i = 0;i < 4;i++)
//	{
//		int x2 = x + dx[i];
//		int y2 = y + dy[i];
//
//		if (x2 > 0 || x2 < size || y2>0 || y2 < size)
//		{
//			if (graph[y2][x2] && !visit[y2][x2])
//				count = dfs(x2, y2, size, count);		// count 1�� �����ϹǷ�
//		}
//	}
//
//	return count;
//}
//
//int main()
//{
//	int size;
//	cin >> size;
//
//	vector<int> v;
//
//	for (int i = 0;i < size;i++)
//	{
//		for (int j = 0;j < size;j++)
//		{
//			char a;
//			cin >> a;
//			graph[i][j] = atoi(&a);			// ���� ���� �ԷµǹǷ� char�� �ް� atoi
//		}
//	}
//
//	for (int i = 0;i < size;i++)
//	{
//		for (int j = 0;j < size;j++)
//		{
//			if (graph[i][j] && !visit[i][j])
//				v.push_back(dfs(j, i, size,0));
//		}
//	}
//
//	sort(v.begin(), v.end());
//
//	cout << v.size() << "\n";
//
//	for (int i = 0;i < v.size();i++)
//	{
//		cout << v[i] << "\n";
//	}
//
//	return 0;
//}
//
///*
//
//ù ��° �ٿ��� ������ ũ�� N(���簢���̹Ƿ� ���ο� ������ ũ��� ������ 5��N��25)�� �Էµǰ�, �� ���� N�ٿ��� ���� N���� �ڷ�(0Ȥ�� 1)�� �Էµȴ�.
//ù ��° �ٿ��� �� �������� ����Ͻÿ�. �׸��� �� ������ ���� ���� ������������ �����Ͽ� �� �ٿ� �ϳ��� ����Ͻÿ�.
//
//https://www.acmicpc.net/problem/2667
//
//DFS�� ������ ���� ���
//
//*/