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
//ù° �ٿ� ����� �� N(1 �� N �� 1,000)�� �־�����. ��° �ٿ��� �� ����� ���� �����ϴµ� �ɸ��� �ð� Pi�� �־�����. (1 �� Pi �� 1,000)
//ù° �ٿ� �� ����� ���� �����ϴµ� �ʿ��� �ð��� ���� �ּڰ��� ����Ѵ�.
//
//https://www.acmicpc.net/problem/11399
//
//*/