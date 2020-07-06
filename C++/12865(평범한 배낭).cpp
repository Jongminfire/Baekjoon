//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	int n, k;
//	cin >> n >> k;
//
//	int w[101] = { 0 };
//	int v[101] = { 0 };
//
//	int dp[100002] = { 0 };
//
//	for (int i = 0;i < n;i++)
//	{
//		cin >> w[i] >> v[i];
//	}
//
//	for (int i = 0;i < n;i++)
//	{
//		for (int j = k; j>=1 ;j--)						// top-down
//		{
//			if (j-w[i]<0) break;
//
//			dp[j] = max(dp[j], dp[j - w[i]] + v[i]);		// 가능한 모든 값에 w[i]를 더 하지만 아이템이 중복되지는 않음
//		}
//	}
//
//	cout << dp[k] << "\n";
//	
//	return 0;
//}
//
///*
//
//쪼갤수없는 knapsack dp문제
//
//https://www.acmicpc.net/problem/12865
//
//*/