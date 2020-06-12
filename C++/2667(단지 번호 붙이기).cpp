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
//				count = dfs(x2, y2, size, count);		// count 1씩 증가하므로
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
//			graph[i][j] = atoi(&a);			// 띄어쓰기 없이 입력되므로 char로 받고 atoi
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
//첫 번째 줄에는 지도의 크기 N(정사각형이므로 가로와 세로의 크기는 같으며 5≤N≤25)이 입력되고, 그 다음 N줄에는 각각 N개의 자료(0혹은 1)가 입력된다.
//첫 번째 줄에는 총 단지수를 출력하시오. 그리고 각 단지내 집의 수를 오름차순으로 정렬하여 한 줄에 하나씩 출력하시오.
//
//https://www.acmicpc.net/problem/2667
//
//DFS로 연결요소 개수 출력
//
//*/