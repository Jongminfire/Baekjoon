//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	cin.tie(nullptr);					// �ð����࿡ �ʼ�
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
//			max = num;					//max�� ���ϸ� 10001�������� �˻��ϹǷ�
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
//ù° �ٿ� ���� ���� N(1 �� N �� 10,000,000)�� �־�����. ��° �ٺ��� N���� �ٿ��� ���ڰ� �־�����. �� ���� 10,000���� �۰ų� ���� �ڿ����̴�.
//
//https://www.acmicpc.net/problem/10989
//
//*/