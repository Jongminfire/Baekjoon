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
//ù° �ٿ� ������ �� N�� ����̰� ������ ���������� �ϴ� ������ ���� M�� �־�����. (1 �� N �� 1,000,000, 1 �� M �� 2,000,000,000)
//��° �ٿ��� ������ ���̰� �־�����. ������ ������ ���� �׻� M�� �ѱ� ������, ����̴� ���� �ʿ��� ������ �׻� ������ �� �ִ�. ���̴� 1,000,000,000���� �۰ų� ���� ���� ���� �Ǵ� 0�̴�.
//
//https://www.acmicpc.net/problem/2805
//
//*/