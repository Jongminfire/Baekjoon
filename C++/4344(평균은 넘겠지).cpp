//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//void avg(vector<int> v)
//{
//	double sum = 0;
//	double average;
//
//	double success = 0;
//
//	for (int i = 0;i < v.size();i++)
//	{
//		sum += v[i];
//	}
//
//	average = sum / v.size();
//
//	for (int i = 0;i < v.size();i++)
//	{
//		if (v[i] > average)
//		{
//			success++;
//		}
//	}
//
//	printf("%.3f%%\n", success / v.size() * 100);
//}
//
//int main()
//{
//	int N;
//	int size;
//	
//	vector<int> v;
//	cin >> N;
//
//	for (int i = 0;i < N;i++)
//	{
//		cin >> size;
//		v.resize(size);
//
//		for (int j = 0;j < size;j++)
//		{
//			cin >> v[j];
//
//			if (j == size - 1)
//				avg(v);
//		}
//	}
//
//	return 0;
//}
//
///*
//
//첫째 줄에는 테스트 케이스의 개수 C가 주어진다.
//둘째 줄부터 각 테스트 케이스마다 학생의 수 N(1 ≤ N ≤ 1000, N은 정수)이 첫 수로 주어지고, 이어서 N명의 점수가 주어진다. 점수는 0보다 크거나 같고, 100보다 작거나 같은 정수이다.
//
//https://www.acmicpc.net/problem/4344
//
//*/