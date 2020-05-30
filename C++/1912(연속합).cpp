//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	long long max = 0;
//	int n;
//	cin >> n;
//
//	vector<int> v(n);
//	vector<long long> dp(n,0);
//
//	for (int i = 0;i < n;i++)
//	{
//		cin >> v[i];
//	}
//
//	if (v[0] > 0)
//		dp[0] = v[0];
//	else
//		dp[0] = 0;
//
//	max = v[0];
//
//	for (int i = 1;i < n;i++)
//	{
//		if (v[i] < 0)
//		{
//			if (dp[i - 1] + v[i] > 0)
//				dp[i] = dp[i - 1] + v[i];
//			else
//			{
//				if (dp[i - 1] + v[i] > max)
//					max = dp[i - 1] + v[i];
//			}
//		}
//		else
//		{
//			dp[i] = dp[i - 1] + v[i];
//			
//			if (max < dp[i])
//				max = dp[i];
//		}
//	}
//
//	cout << max << "\n";
//
//	return 0;
//}
//
///*
//
//n개의 정수로 이루어진 임의의 수열이 주어진다. 우리는 이 중 연속된 몇 개의 수를 선택해서 구할 수 있는 합 중 가장 큰 합을 구하려고 한다. 단, 수는 한 개 이상 선택해야 한다.
//
//예를 들어서 10, -4, 3, 1, 5, 6, -35, 12, 21, -1 이라는 수열이 주어졌다고 하자. 여기서 정답은 12+21인 33이 정답이 된다.
//
//https://www.acmicpc.net/problem/1912
//
//*/