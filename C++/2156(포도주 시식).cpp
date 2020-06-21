//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//long long max3(long long a,long long b, long long c)
//{
//	return max(max(a, b), c);
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	vector<int> v(n);
//	long long dp[10010][3] = { 0 };
//	long long ans = 0;
//
//	for (int i = 0;i < n;i++)
//	{
//		cin >> v[i];
//	}
//
//	dp[0][0] = v[0];
//	dp[0][1] = v[0];
//	dp[0][2] = v[0];
//
//	dp[1][0] = v[1];
//	dp[1][1] = v[1] + v[0];
//	dp[1][2] = v[1];
//
//	dp[2][0] = v[0] + v[2];
//	dp[2][1] = v[1] + v[2];
//	dp[2][2] = v[0] + v[1];
//
//	for (int i = 3;i < n;i++)
//	{
//		dp[i][0] = max3(dp[i - 2][0], dp[i - 2][1],dp[i-2][2]) + v[i];		// 두번째 전 포도주를 먹는 경우
//		dp[i][1] = v[i] + dp[i - 1][0];										// 첫번째 전 포도주를 먹는 경우
//		dp[i][2] = max3(dp[i-1][0],dp[i-1][1],dp[i-1][2]);					// 포도주를 먹지 않는 경우
//	}
//
//	if (n == 1)
//		ans = v[0];
//
//	else if (n == 2)
//		ans = v[0] + v[1];
//
//	else if (n == 3)
//		ans = max3(v[0] + v[1], v[0] + v[2], v[1] + v[2]);
//
//	else
//		ans = max3(dp[n - 1][0], dp[n - 1][1], dp[n - 1][2]);
//
//	cout << ans << "\n";
//	
//	return 0;
//}
//
///*
//
//dp문제
//
//https://www.acmicpc.net/problem/2156
//
//*/