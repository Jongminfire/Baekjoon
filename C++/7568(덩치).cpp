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
//ù �ٿ��� ��ü ����� �� N�� �־�����. �׸��� �̾����� N���� �ٿ��� �� ����� �����Կ� Ű�� ��Ÿ���� ���� ���� x�� y�� �ϳ��� ������ �ΰ� ���� ��Ÿ����. ��, 2 �� N �� 50, 10 �� x,y �� 200 �̴�..
//
//https://www.acmicpc.net/problem/7568
//*/