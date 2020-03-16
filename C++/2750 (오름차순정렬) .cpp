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
//	for (int i=0;i<N;i++)									// 버블 정렬
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
//<문제>
//N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.
//
//*/