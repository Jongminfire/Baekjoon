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
//				count = dfs(x2, y2, w,h, count);		// count 1씩 증가하므로
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
//첫째 줄에 M과 N, 그리고 K가 빈칸을 사이에 두고 차례로 주어진다. M, N, K는 모두 100 이하의 자연수이다. 둘째 줄부터 K개의 줄에는 한 줄에 하나씩 직사각형의 왼쪽 아래 꼭짓점의 x, y좌표값과 오른쪽 위 꼭짓점의 x, y좌표값이 빈칸을 사이에 두고 차례로 주어진다. 모눈종이의 왼쪽 아래 꼭짓점의 좌표는 (0,0)이고, 오른쪽 위 꼭짓점의 좌표는(N,M)이다. 입력되는 K개의 직사각형들이 모눈종이 전체를 채우는 경우는 없다.
//첫째 줄에 분리되어 나누어지는 영역의 개수를 출력한다. 둘째 줄에는 각 영역의 넓이를 오름차순으로 정렬하여 빈칸을 사이에 두고 출력한다.
//
//https://www.acmicpc.net/problem/2583
//
//입력 받는 좌표 제외한 부분 연결요소 찾기
//*/