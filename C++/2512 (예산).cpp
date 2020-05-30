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
//	high = c_max;			// pow(10,8)���� �� ��� �ִ밪�� �Ѿ�� ������. ������ �� ������ ���� ��û�� ���� �� �����Ƿ�.
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
//ù° �ٿ��� ������ ���� �ǹ��ϴ� ���� N�� �־�����. N�� 3 �̻� 10,000 �����̴�. ���� �ٿ��� �� ������ �����û�� ǥ���ϴ� N���� ������ ��ĭ�� ���̿� �ΰ� �־�����. �� ������ ��� 1 �̻� 100,000 �����̴�. �� ���� �ٿ��� �� ������ ��Ÿ���� ���� M�� �־�����. M�� N �̻� 1,000,000,000 �����̴�.
//
//https://www.acmicpc.net/problem/2512
//
//*/