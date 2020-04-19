//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	vector<int> time;
//
//	int N;
//	int result = 0;
//	int index = 0;
//
//	cin >> N;
//	time.resize(N);
//
//	for (int i = 0;i < N;i++)
//	{
//		cin >> time[i];
//	}
//
//	for (int i = 0;i < N;i++)
//	{
//		int min=1000;
//
//		for (int j = 0;j < N;j++)
//		{
//			if (time[j] < min)
//			{
//				min = time[j];
//				index = j;
//			}
//		}
//
//		time[index] = 1000;
//		result += min*(N - i);
//	}
//
//	cout << result << "\n";
//
//	return 0;
//}
//
///*
//
//첫째 줄에 사람의 수 N(1 ≤ N ≤ 1,000)이 주어진다. 둘째 줄에는 각 사람이 돈을 인출하는데 걸리는 시간 Pi가 주어진다. (1 ≤ Pi ≤ 1,000)
//첫째 줄에 각 사람이 돈을 인출하는데 필요한 시간의 합의 최솟값을 출력한다.
//
//https://www.acmicpc.net/problem/11399
//
//*/