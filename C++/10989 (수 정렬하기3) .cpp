//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	cin.tie(nullptr);					// 시간단축에 필수
//	ios_base::sync_with_stdio(false);
//
//	int N;
//	int num;
//	int max = 0;
//	cin >> N;
//
//	int arr[10001] = { 0 };
//
//	for (int i = 0;i < N;i++)
//	{
//		cin >> num;
//		arr[num]++;
//
//		if (max < num)
//			max = num;					//max를 안하면 10001범위까지 검사하므로
//	}
//
//	for (int i = 1;i <=max;i++) 
//	{
//		if (arr[i] != 0) 
//		{
//			while (arr[i] > 0)
//			{
//				cout << i << "\n";
//				arr[i]--;
//			}
//		}
//			
//	}
//
//	return 0;
//}
//
///*
//
//첫째 줄에 수의 개수 N(1 ≤ N ≤ 10,000,000)이 주어진다. 둘째 줄부터 N개의 줄에는 숫자가 주어진다. 이 수는 10,000보다 작거나 같은 자연수이다.
//
//https://www.acmicpc.net/problem/10989
//
//*/