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
//		dp[i] = v[i];
//
//		for (int j = 0;j < i;j++)
//		{
//			if (v[j]<v[i] && dp[j] + v[i]>dp[i])
//				dp[i] = dp[j] + v[i];
//		}
//
//		ans = max(dp[i], ans);
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}
//
///*
//
//LIS 문제로 기존에 1을 더해주는 대신 해당 벡터의 값을 넣어주면 됨
//
//https://www.acmicpc.net/problem/11055
//
//*/