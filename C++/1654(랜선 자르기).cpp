//#include <iostream>
//#include <string>
//#include <algorithm>
//#include <vector>
//#include <math.h>
//
//using namespace std;
//
//int main()
//{
//	long long K, N;
//	long long max = 0;
//	long long v_max = 0;
//	cin >> K >> N;
//
//	vector<long long> v(K);
//
//	for (int i = 0;i < K;i++)
//	{
//		cin >> v[i];
//		if (v_max < v[i])
//			v_max = v[i];
//	}
//	
//	sort(v.begin(),v.end());
//
//	long long left = 1;					// 0으로 둘 경우 런타임 에러
//	long long right = v_max;
//
//	while (left <= right)
//	{
//		long long mid = (left + right) / 2;
//		int sum = 0;
//
//		for (int i = 0;i < K;i++)
//		{
//			sum += (v[i] / mid);
//		}
//
//		if (N <= sum)
//		{
//			left = mid + 1;		// N이 커질 수록 sum은 작아지기 때문에
//
//			if (mid > max)
//				max = mid;
//		}
//		else
//			right = mid - 1;
//	}
//
//	cout << max << "\n";
//
//	return 0;
//}
//
///*
//
//첫째 줄에는 오영식이 이미 가지고 있는 랜선의 개수 K, 그리고 필요한 랜선의 개수 N이 입력된다. K는 1이상 10,000이하의 정수이고, N은 1이상 1,000,000이하의 정수이다. 그리고 항상 K ≦ N 이다. 그 후 K줄에 걸쳐 이미 가지고 있는 각 랜선의 길이가 센티미터 단위의 정수로 입력된다. 랜선의 길이는 231-1보다 작거나 같은 자연수이다.
//
//https://www.acmicpc.net/problem/1654
//
//*/