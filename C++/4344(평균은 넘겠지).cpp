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
//ù° �ٿ��� �׽�Ʈ ���̽��� ���� C�� �־�����.
//��° �ٺ��� �� �׽�Ʈ ���̽����� �л��� �� N(1 �� N �� 1000, N�� ����)�� ù ���� �־�����, �̾ N���� ������ �־�����. ������ 0���� ũ�ų� ����, 100���� �۰ų� ���� �����̴�.
//
//https://www.acmicpc.net/problem/4344
//
//*/