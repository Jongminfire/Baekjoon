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
//ù° �ٿ� 2��n ũ���� ���簢���� ä��� ����� ���� 10,007�� ���� �������� ����Ѵ�. (2x1,1x2,2x2)
//
//dp����
//
//https://www.acmicpc.net/problem/11726
//
//*/