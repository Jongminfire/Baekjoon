//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int N;
//	long long prev = 1;
//	long long prev2 = 0;
//	long long result=0;
//
//	cin >> N;
//
//	if (N == 0)
//	{
//		cout << "0";
//		return 0;
//	}
//	
//	if (N == 1)
//	{
//		cout << "1";
//		return 0;
//	}
//
//	for (int i =1;i < N;i++)
//	{
//		result = (prev+prev2);
//		prev2 = prev;
//		prev = result;
//	}
//
//	cout << result;
//
//	return 0;
//}
//
///*
//
//ù° �ٿ� n�� �־�����. n�� 90���� �۰ų� ���� �ڿ����̴�.
//
//�ذ� : ������ ��͸� �̿��� �Ǻ���ġ (1003�� ����)�� ��͸� �ݺ��ϸ鼭 �ð��� �ʹ� �����ɸ��� ������ �־��� ������ ��� ��� for������ �ݺ�
//
//https://www.acmicpc.net/problem/2748
//*/