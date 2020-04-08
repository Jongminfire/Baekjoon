//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	int N;
//	cin >> N;
//	
//	vector<int> height(N);
//	vector<int> weight(N);
//	vector<int> grade(N,1);
//
//	for (int i = 0;i < N;i++)
//	{
//		cin >> weight[i] >> height[i];
//	}
//
//	for (int i = 0;i < N;i++)
//	{
//		for (int j = 0;j < N;j++)
//		{
//			if (i != j)
//			{
//				if (height[i] < height[j] && weight[i] < weight[j])
//					grade[i]++;
//			}
//		}
//	}
//
//	for (int i = 0;i < N;i++)
//		cout << grade[i] << " ";
//
//	return 0;
//}
//
///*
//
//첫 줄에는 전체 사람의 수 N이 주어진다. 그리고 이어지는 N개의 줄에는 각 사람의 몸무게와 키를 나타내는 양의 정수 x와 y가 하나의 공백을 두고 각각 나타난다. 단, 2 ≤ N ≤ 50, 10 ≤ x,y ≤ 200 이다..
//
//https://www.acmicpc.net/problem/7568
//*/