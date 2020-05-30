//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	long long mid = 0;
//	long long low;
//	long long high;
//	long long c_max = 0;
//	long long max;
//	long long M;
//	int N;
//	cin >> N;
//
//	vector<int> c(N);
//
//	for (int i = 0;i < N;i++)
//	{
//		cin >> c[i];
//		
//		if (c_max < c[i])
//			c_max = c[i];
//	}
//
//	sort(c.begin(), c.end());
//	
//	cin >> M;
//
//	low = 1;
//	high = c_max;			// pow(10,8)으로 할 경우 최대값을 넘어가기 때문에. 예산은 각 지방의 예산 요청을 넘을 수 없으므로.
//	max = 0;
//
//	while (low <= high)
//	{
//		mid = (low + high) / 2;
//		long long sum = 0;
//
//		for (int i = 0;i < N;i++)
//		{
//			if (c[i] < mid)
//				sum += c[i];
//			else
//				sum += mid;
//		}
//
//		if (sum > M)
//		{
//			high = mid - 1;
//		}
//		else
//		{
//			if (max < mid)
//				max = mid;
//
//			low = mid + 1;
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
//첫째 줄에는 지방의 수를 의미하는 정수 N이 주어진다. N은 3 이상 10,000 이하이다. 다음 줄에는 각 지방의 예산요청을 표현하는 N개의 정수가 빈칸을 사이에 두고 주어진다. 이 값들은 모두 1 이상 100,000 이하이다. 그 다음 줄에는 총 예산을 나타내는 정수 M이 주어진다. M은 N 이상 1,000,000,000 이하이다.
//
//https://www.acmicpc.net/problem/2512
//
//*/