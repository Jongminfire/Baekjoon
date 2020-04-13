//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	int N;
//	
//	cin >> N;
//
//	vector<int> v(N,-1);
//	vector<int> ans(N);
//
//	for (int i = 0;i < N;i++)
//	{
//		cin >> ans[i];
//	}
//
//	v[ans[0]] = 1;
//	
//	int now = ans[0];
//
//	for (int i = 1;i < N;i++)
//	{
//		int gap = (ans[i] - ans[i - 1]);
//		int count = 0;
//
//		if (gap < 0)
//		{
//			int l = 1;
//			count = 1;
//			while (1)
//			{
//				if (v[now - l] == -1)
//				{
//					if (count == -gap)
//					{
//						v[now- l] = i + 1;
//						now = now - l;
//						break;
//					}
//
//					count++;
//					l++;
//				}
//				else
//					l++;
//			}
//		}
//		else
//		{
//			int r = 1;
//
//			while (1)
//			{
//				if (v[now + r] == -1)
//				{
//					if (count == gap)
//					{
//						v[now + r] = i + 1;
//						now = now + r;
//						break;
//					}
//
//					r++;
//					count++;
//				}
//				else
//					r++;
//			}
//		}
//	}
//
//	for (int i = 0;i < N;i++)
//	{
//		cout << v[i] << " ";
//	}
//
//	return 0;
//}
//
///*
//
//첫째 줄에 사람의 수 N이 주어진다. N은 10보다 작거나 같은 자연수이다. 둘째 줄에는 키가 1인 사람부터 차례대로 자기보다 키가 큰 사람이 왼쪽에 몇 명이 있었는지 주어진다. i번째 수는 0보다 크거나 같고, N-i보다 작거나 같다.
//https://www.acmicpc.net/problem/1138
//
//*/