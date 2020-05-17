//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	int N,M;
//	cin >> N;
//
//	vector<int> v1(N);
//	
//
//	for (int i = 0;i < N;i++)
//	{
//		cin >> v1[i];
//	}
//
//	cin >> M;
//	vector<int> v2(M);
//
//	for (int i = 0;i < M;i++)
//	{
//		cin >> v2[i];
//	}
//
//	sort(v1.begin(), v1.end());
//
//	for (int i = 0;i < M;i++)
//	{
//		if (binary_search(v1.begin(), v1.end(), v2[i]) == true)
//		{
//			cout << "1\n";
//			
//		}
//		else
//			cout << "0\n";
//	}
//
//	return 0;
//}
//
///*
//
//첫째 줄에 자연수 N(1≤N≤100,000)이 주어진다. 다음 줄에는 N개의 정수 A[1], A[2], …, A[N]이 주어진다. 다음 줄에는 M(1≤M≤100,000)이 주어진다. 다음 줄에는 M개의 수들이 주어지는데, 이 수들이 A안에 존재하는지 알아내면 된다. 모든 정수의 범위는 -231 보다 크거나 같고 231보다 작다.
//
//https://www.acmicpc.net/problem/1920
//
//*/