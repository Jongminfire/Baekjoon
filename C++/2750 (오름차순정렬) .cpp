//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	int N;
//	
//	cin >> N;
//	
//	int *array = new int[N];
//
//	for (int i = 0;i < N;i++)
//	{
//		cin >> array[i];
//	}
//
//	for (int i=0;i<N;i++)									// ���� ����
//		for (int j = i; j < N; j++)
//		{
//			if (array[i] > array[j])
//			{
//				int swap = array[j];
//				array[j] = array[i];
//				array[i] = swap;
//			}
//		}
//
//	for (int i = 0;i < N;i++)
//	{
//		cout << array[i]<<"\n";
//	}
//
//	return 0;
//}
//
//
///*
//
//<����>
//N���� ���� �־����� ��, �̸� ������������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//*/