//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int calc(int a)
//{
//	int count = 0;
//	int result = 0;
//
//	for (int i = 1;i <10;i++)
//	{
//		count++;
//
//		for (int j =1; j <= i;j++)
//		{
//			result++;
//			if (result - 1 == a)
//				return count;
//		}
//	}
//}
//
//int main()
//{
//	int N=0;
//	int result=0;
//	cin >> N;
//
//	if (N == 1)
//		result = 1;
//	else
//		result = calc((N - 2) / 6)+1;
//
//	cout << result << "\n";
//
//	return 0;
//}
//
///*
//
//���� �׸��� ���� ���������� �̷���� ������ �ִ�. �׸����� ���� �ٿ� ���� �߾��� �� 1���� �����ؼ� �̿��ϴ� �濡 ���ư��鼭 1�� �����ϴ� ��ȣ�� �ּҷ� �ű� �� �ִ�. ���� N�� �־����� ��, ������ �߾� 1���� N�� ����� �ּ� ������ ���� ������ �� �� �� ���� ���� ����������(���۰� ���� �����Ͽ�)�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. ���� ���, 13������ 3��, 58������ 5���� ������.
//
//https://www.acmicpc.net/problem/2292
//
//*/