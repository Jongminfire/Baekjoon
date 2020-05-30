//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	long long N, M;
//	long long t_max = 0;
//	cin >> N >> M;
//
//	vector<long long> trees(N);
//
//	for (long long i = 0;i < N;i++)
//	{
//		cin >> trees[i];
//		if (t_max < trees[i])
//			t_max = trees[i];
//	}
//
//	sort(trees.begin(), trees.end());
//
//	long long left = 0;
//	long long right = t_max;
//	long long max = 0;
//
//	while (left <= right)
//	{
//		long long mid = (left + right) / 2;
//		long long sum = 0;
//		
//		for (int i = 0;i < N;i++)
//		{
//			if (trees[i] - mid > 0)
//				sum += (trees[i] - mid);
//		}
//
//		if (sum >= M)
//		{
//			if (max < mid)
//				max = mid;
//
//			left = mid + 1;
//		}
//		else if(sum < M)
//		{
//			right = mid - 1;
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
//첫째 줄에 나무의 수 N과 상근이가 집으로 가져가려고 하는 나무의 길이 M이 주어진다. (1 ≤ N ≤ 1,000,000, 1 ≤ M ≤ 2,000,000,000)
//둘째 줄에는 나무의 높이가 주어진다. 나무의 높이의 합은 항상 M을 넘기 때문에, 상근이는 집에 필요한 나무를 항상 가져갈 수 있다. 높이는 1,000,000,000보다 작거나 같은 양의 정수 또는 0이다.
//
//https://www.acmicpc.net/problem/2805
//
//*/