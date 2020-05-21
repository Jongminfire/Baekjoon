//#include <iostream>
//#include <vector>
//#include <algorithm>			// min 사용
//
//using namespace std;
//
//int main()
//{
//	int N;
//	int ans = 0;
//	cin >> N;
//
//	vector<vector<int>> rgb(N, vector<int>(3));
//	vector<vector<int>> dp(N, vector<int>(3));
//
//	for (int i = 0;i < N;i++)
//	{
//		cin >> rgb[i][0] >> rgb[i][1] >> rgb[i][2];
//	}
//
//	dp[0][0] = rgb[0][0];
//	dp[0][1] = rgb[0][1];
//	dp[0][2] = rgb[0][2];
//
//	for (int i = 1;i < N;i++)
//	{
//		dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + rgb[i][0];
//		dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + rgb[i][1];
//		dp[i][2] = min(dp[i - 1][1], dp[i - 1][0]) + rgb[i][2];
//	}
//
//	ans = min(min(dp[N - 1][0], dp[N - 1][1]), dp[N - 1][2]);
//	cout << ans << "\n";
//
//	return 0;
//
//
//	/*
//	
//	첫째 줄에 집의 수 N(2 ≤ N ≤ 1,000)이 주어진다. 둘째 줄부터 N개의 줄에는 각 집을 빨강, 초록, 파랑으로 칠하는 비용이 1번 집부터 한 줄에 하나씩 주어진다. 집을 칠하는 비용은 1,000보다 작거나 같은 자연수이다.
//
//	https://www.acmicpc.net/problem/1149
//	
//	*/