//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int dp_plus(int n)
//{
//	vector<int> dp(n+1,0);
//
//	dp[1] = 1;
//	dp[2] = 2;
//	dp[3] = 4;
//
//	if (n > 3)
//	{
//		for (int i =4; i < n + 1; i++)
//		{
//			dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];		//1,2,3을 더하는 경우의수 세가지 밖에 없으므로 i-1에 1을 더하면 i, i-2에 2를 더하면 i, i-3에 3을 더하면 i 이므로
//		}
//	}
//
//	return dp[n];
//}
//
//int main()
//{
//	int N;
//	int num;
//	cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		cin >> num;
//		cout << dp_plus(num) << "\n";
//	}
//
//	return 0;
//}
//
///*
//
//정수 n이 주어졌을 때, n을 1, 2, 3의 합으로 나타내는 방법의 수를 구하는 프로그램을 작성하시오.
//
//https://www.acmicpc.net/problem/9095
//
//*/