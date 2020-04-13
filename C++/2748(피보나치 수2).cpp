//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int N;
//	long long prev = 1;
//	long long prev2 = 0;
//	long long result=0;
//
//	cin >> N;
//
//	if (N == 0)
//	{
//		cout << "0";
//		return 0;
//	}
//	
//	if (N == 1)
//	{
//		cout << "1";
//		return 0;
//	}
//
//	for (int i =1;i < N;i++)
//	{
//		result = (prev+prev2);
//		prev2 = prev;
//		prev = result;
//	}
//
//	cout << result;
//
//	return 0;
//}
//
///*
//
//첫째 줄에 n이 주어진다. n은 90보다 작거나 같은 자연수이다.
//
//해결 : 기존의 재귀를 이용한 피보나치 (1003번 문제)는 재귀를 반복하면서 시간이 너무 오래걸리는 단점이 있었기 때문에 재귀 대신 for문으로 반복
//
//https://www.acmicpc.net/problem/2748
//*/