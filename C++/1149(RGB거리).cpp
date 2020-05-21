//#include <iostream>
//#include <vector>
//#include <algorithm>			// min ���
//
//using namespace std;
//
//int main()
//{
//	int N;
//	int ans = 0;
//	cin >> N;
//
//	vector<vector<int>> rgb(N, vector<int>(3));
//	vector<vector<int>> dp(N, vector<int>(3));
//
//	for (int i = 0;i < N;i++)
//	{
//		cin >> rgb[i][0] >> rgb[i][1] >> rgb[i][2];
//	}
//
//	dp[0][0] = rgb[0][0];
//	dp[0][1] = rgb[0][1];
//	dp[0][2] = rgb[0][2];
//
//	for (int i = 1;i < N;i++)
//	{
//		dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + rgb[i][0];
//		dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + rgb[i][1];
//		dp[i][2] = min(dp[i - 1][1], dp[i - 1][0]) + rgb[i][2];
//	}
//
//	ans = min(min(dp[N - 1][0], dp[N - 1][1]), dp[N - 1][2]);
//	cout << ans << "\n";
//
//	return 0;
//
//
//	/*
//	
//	ù° �ٿ� ���� �� N(2 �� N �� 1,000)�� �־�����. ��° �ٺ��� N���� �ٿ��� �� ���� ����, �ʷ�, �Ķ����� ĥ�ϴ� ����� 1�� ������ �� �ٿ� �ϳ��� �־�����. ���� ĥ�ϴ� ����� 1,000���� �۰ų� ���� �ڿ����̴�.
//
//	https://www.acmicpc.net/problem/1149
//	
//	*/