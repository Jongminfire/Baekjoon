//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	int N;
//	int i;
//	cin >> N;
//
//	vector<int> dp(N+1,1000);
//
//	dp[N] = 0;
//
//	i = N;
//
//	while (i!=0)
//	{
//		if (i % 3 == 0)
//		{
//			if (dp[i / 3] > dp[i]+1)
//				dp[i / 3] = dp[i]+1;
//		}
//
//		if (i % 2 == 0)
//		{
//			if (dp[i / 2] > dp[i]+1)
//				dp[i / 2] = dp[i]+1;
//		}
//
//		if (dp[i-1] > dp[i]+1)
//				dp[i-1] = dp[i]+1;
//
//		i--;
//	}
//
//	cout << dp[1] << "\n";
//
//	return 0;
//}
//
///*
//
//정수 X에 사용할 수 있는 연산은 다음과 같이 세 가지 이다.
//
//X가 3으로 나누어 떨어지면, 3으로 나눈다.
//X가 2로 나누어 떨어지면, 2로 나눈다.
//1을 뺀다.
//정수 N이 주어졌을 때, 위와 같은 연산 세 개를 적절히 사용해서 1을 만들려고 한다. 연산을 사용하는 횟수의 최솟값을 출력하시오.
//
//(DP문제)
//
//https://www.acmicpc.net/problem/1463
//
//*/