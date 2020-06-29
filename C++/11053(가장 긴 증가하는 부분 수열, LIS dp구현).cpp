//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	int ans = 0;
//	cin >> n;
//
//	vector<int> v(n);
//	vector<int> dp(n,0);
//
//	for (int i = 0;i < n;i++)
//	{
//		cin >> v[i];
//	}
//
//	for (int i = 0;i < n;i++)
//	{
//		dp[i] = 1;
//
//		for (int j = 0;j < i;j++)
//		{
//			if (v[j] < v[i] && dp[j] + 1 > dp[i])
//				dp[i] = dp[j] + 1;
//		}
//
//		ans = max(ans, dp[i]);
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}
//
///*
//
//dp를 사용한 LIS 구현
//
//https://www.acmicpc.net/problem/11053
//
//*/