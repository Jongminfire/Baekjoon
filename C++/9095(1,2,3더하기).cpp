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
//			dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];		//1,2,3�� ���ϴ� ����Ǽ� ������ �ۿ� �����Ƿ� i-1�� 1�� ���ϸ� i, i-2�� 2�� ���ϸ� i, i-3�� 3�� ���ϸ� i �̹Ƿ�
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
//���� n�� �־����� ��, n�� 1, 2, 3�� ������ ��Ÿ���� ����� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//https://www.acmicpc.net/problem/9095
//
//*/