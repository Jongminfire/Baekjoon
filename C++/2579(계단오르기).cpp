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
//1.����� �� ���� �� ��ܾ� �Ǵ� �� ��ܾ� ���� �� �ִ�. ��, �� ����� �����鼭 �̾ ���� ����̳�, ���� ���� ������� ���� �� �ִ�.
//2.���ӵ� �� ���� ����� ��� ��Ƽ��� �� �ȴ�. ��, �������� ��ܿ� ���Ե��� �ʴ´�.
//3.������ ���� ����� �ݵ�� ��ƾ� �Ѵ�.
//
//DP���� https://ldgeao99.tistory.com/358 �� ������.
//
//https://www.acmicpc.net/problem/2579
//
//*/