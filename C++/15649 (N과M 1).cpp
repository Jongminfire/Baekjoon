//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	int N, M;
//	bool end = false;
//
//	cin >> N >> M;
//	
//	vector <int> n(M, 1);
//
//	if (M == 1)
//		cout << n[0] << "\n";
//
//	if (N == M && N == 1)
//		return 0;
//
//	while (end == false)
//	{
//		vector<int> check(N + 1);
//		bool dup = false;
//
//		for (int i = M - 1; i >= 0;i--)
//		{
//			if (n[i] == N && i != 0)
//			{
//				if (n[i - 1] == N)
//					continue;
//				else
//					n[i - 1]++;
//
//				for (int j = i; j < M; j++)
//				{
//					n[j] = 1;
//				}
//
//				break;
//			}
//
//			else if (n[i] != N)
//			{
//				n[i]++;
//				break;
//			}
//		}
//
//		for (int i = 0; i < M; i++)
//		{
//			check[n[i]]++;
//
//			if (check[n[i]] > 1)
//				dup = true;
//		}
//
//		if (dup == false)
//		{
//			for (int i = 0;i < M;i++)
//				cout << n[i] << " ";
//			cout << "\n";
//		}
//
//		end = true;
//
//		for (int i = 0; i < M; i++)
//		{
//			if (n[i] != N)
//				end = false;
//		}
//	}
//
//	return 0;
//}
//
///*
//
//자연수 N과 M이 주어졌을 때, 아래 조건을 만족하는 길이가 M인 수열을 모두 구하는 프로그램을 작성하시오.
//1부터 N까지 자연수 중에서 중복 없이 M개를 고른 수열
//
//https://www.acmicpc.net/problem/15649
//
//풀이 : 15652를 기반으로 15650 과 15651을 섞었음
//
//*/