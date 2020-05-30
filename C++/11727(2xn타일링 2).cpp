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
//	vector<int> dp(1001,-1);
//
//	dp[0] = 0;
//	dp[1] = 1;
//	dp[2] = 3;
//
//	if (N > 2)
//	{
//		for (int i = 3; i < N + 1; i++)
//			dp[i] = (dp[i - 2]*2 + dp[i - 1]) % 10007;
//	}
//	cout << dp[N] << "\n";
//
//	return 0;
//}
//
///*
//
//첫째 줄에 2×n 크기의 직사각형을 채우는 방법의 수를 10,007로 나눈 나머지를 출력한다. (2x1,1x2,2x2)
//
//dp문제
//
//https://www.acmicpc.net/problem/11726
//
//*/