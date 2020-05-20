//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	int N;
//	cin >> N;
//
//	int ans = 0;
//	
//	vector<vector<int>> v(100, vector<int>(100,0));
//
//	for (int i = 0;i < N;i++)
//	{
//		int x, y;
//		cin >> x >> y;
//
//		for (int a = 0;a < 10;a++)
//			for(int b = 0 ; b< 10 ;b++)
//				v[y+a][x+b]++;
//	}
//
//	for (int i = 0;i < 100;i++)
//	{
//		for (int j = 0; j < 100; j++)
//		{
//			if (v[i][j] > 1)
//			{
//				ans += (v[i][j]-1);
//			}
//		}
//	}
//
//	cout << (100*N) - ans << "\n";
//
//
//	return 0;
//}
//
///*
//
//첫째 줄에 색종이의 수가 주어진다. 이어 둘째 줄부터 한 줄에 하나씩 색종이를 붙인 위치가 주어진다. 색종이를 붙인 위치는 두 개의 자연수로 주어지는데 첫 번째 자연수는 색종이의 왼쪽 변과 도화지의 왼쪽 변 사이의 거리이고, 두 번째 자연수는 색종이의 아래쪽 변과 도화지의 아래쪽 변 사이의 거리이다. 색종이의 수는 100 이하이며, 색종이가 도화지 밖으로 나가는 경우는 없다
//
//https://www.acmicpc.net/problem/2563
//
//*/