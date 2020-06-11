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
//		memset(ground,0,sizeof(ground));		// ground 배열 초기화
//		memset(visit,0,sizeof(visit));			// visit 배열 초기화
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
//입력의 첫 줄에는 테스트 케이스의 개수 T가 주어진다. 그 다음 줄부터 각각의 테스트 케이스에 대해 첫째 줄에는 배추를 심은 배추밭의 가로길이 M(1 ≤ M ≤ 50)과 세로길이 N(1 ≤ N ≤ 50), 그리고 배추가 심어져 있는 위치의 개수 K(1 ≤ K ≤ 2500)이 주어진다. 그 다음 K줄에는 배추의 위치 X(0 ≤ X ≤ M-1), Y(0 ≤ Y ≤ N-1)가 주어진다.
//각 테스트 케이스에 대해 필요한 최소의 배추흰지렁이 마리 수를 출력한다.
//
//https://www.acmicpc.net/problem/1012
//
//연결요소 세는 문제
//
//*/