//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int N;
//	int result = 0;
//	cin >> N;
//
//	vector<int> v(N);
//
//	for (int i = 0;i < N;i++)
//	{
//		cin >> v[i];
//	}
//
//	for (int i = N-1;i >0;i--)					// 4, 6 5 4 8 인경우 (반례), 따라서 뒤부터 시작
//	{
//		if (v[i] <= v[i -1])
//		{
//			result += v[i-1] - v[i] + 1;
//			v[i - 1] = v[i] - 1;
//		}
//	}
//	
//	cout << result << "\n";
//
//	return 0;
//}
//
///*
//
//첫째 줄에 레벨의 수 N이 주어진다. (1 ≤ N ≤ 100) 다음 N개 줄에는 각 레벨을 클리어하면 얻는 점수가 첫 번째 레벨부터 마지막 레벨까지 순서대로 주어진다. 점수는 20,000보다 작은 양의 정수이다.
//
//https://www.acmicpc.net/problem/2847
//
//
//*/