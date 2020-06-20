//#include <iostream>
//#include <string.h>
//
//using namespace std;
//
//int dx[4] = { 0,-1,0,1 };
//int dy[4] = { -1,0,1,0 };
//
//int ground[101][101];
//bool visit[101][101];
//
//void dfs(int x, int y, int size, int h)
//{
//	visit[y][x] = true;
//
//	for (int i = 0;i < 4;i++)
//	{
//		int x2 = x + dx[i];
//		int y2 = y + dy[i];
//
//		if (x2 >= 0 && x2 < size && y2>=0 && y2 < size)
//		{
//			if (ground[y2][x2] > h && !visit[y2][x2])
//			{
//				dfs(x2, y2, size, h);
//			}
//		}
//	}
//}
//
//int main()
//{
//	int result = 0;
//	int min = 101;
//	int max = 0;
//	int size;
//	cin >> size;
//
//	for (int y = 0;y < size;y++)
//	{
//		for (int x = 0;x < size;x++)
//		{
//			cin >> ground[y][x];
//
//			if (ground[y][x] > max)
//				max = ground[y][x];
//			if (ground[y][x] < min)
//				min = ground[y][x];
//		}
//	}
//
//	for (int h = min-1; h <max ; h++)
//	{
//		int count = 0;
//		memset(visit, false, sizeof(visit));
//
//		for (int y = 0;y < size;y++)
//		{
//			for (int x = 0;x < size;x++)
//			{
//				if (ground[y][x] > h && !visit[y][x])
//				{
//					dfs(x, y, size, h);
//					count++;
//				}
//			}
//		}
//
//		if (count > result)
//		{
//			result = count;
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
//첫째 줄에는 어떤 지역을 나타내는 2차원 배열의 행과 열의 개수를 나타내는 수 N이 입력된다. N은 2 이상 100 이하의 정수이다. 둘째 줄부터 N개의 각 줄에는 2차원 배열의 첫 번째 행부터 N번째 행까지 순서대로 한 행씩 높이 정보가 입력된다. 각 줄에는 각 행의 첫 번째 열부터 N번째 열까지 N개의 높이 정보를 나타내는 자연수가 빈 칸을 사이에 두고 입력된다. 높이는 1이상 100 이하의 정수이다.
//첫째 줄에 장마철에 물에 잠기지 않는 안전한 영역의 최대 개수를 출력한다.
//
//https://www.acmicpc.net/problem/2468
//
//*/