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
//n���� ������ �̷���� ������ ������ �־�����. �츮�� �� �� ���ӵ� �� ���� ���� �����ؼ� ���� �� �ִ� �� �� ���� ū ���� ���Ϸ��� �Ѵ�. ��, ���� �� �� �̻� �����ؾ� �Ѵ�.
//
//���� �� 10, -4, 3, 1, 5, 6, -35, 12, 21, -1 �̶�� ������ �־����ٰ� ����. ���⼭ ������ 12+21�� 33�� ������ �ȴ�.
//
//https://www.acmicpc.net/problem/1912
//
//*/