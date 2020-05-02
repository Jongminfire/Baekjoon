//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	int N;
//	cin >> N;
//
//	vector<int> dp(N + 1, -1);
//	vector<int> stair(N + 1);
//
//	for (int i = 1; i < N + 1; i++)
//	{
//		cin >> stair[i];
//	}
//
//	dp[0] = 0;
//	dp[1] = stair[1];
//	dp[2] = stair[1] + stair[2];
//
//	for (int i = 3; i < N + 1; i++)
//	{
//		dp[i] = max(dp[i - 2] + stair[i], dp[i - 3] + stair[i - 1] + stair[i]);
//	}
//	
//	cout << dp[N] << "\n";
//
//	return 0;
//}
//
///*
//
//1.계단은 한 번에 한 계단씩 또는 두 계단씩 오를 수 있다. 즉, 한 계단을 밟으면서 이어서 다음 계단이나, 다음 다음 계단으로 오를 수 있다.
//2.연속된 세 개의 계단을 모두 밟아서는 안 된다. 단, 시작점은 계단에 포함되지 않는다.
//3.마지막 도착 계단은 반드시 밟아야 한다.
//
//DP문제 https://ldgeao99.tistory.com/358 를 참고함.
//
//https://www.acmicpc.net/problem/2579
//
//*/