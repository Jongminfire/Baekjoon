//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int ACM(int h, int w, int n)
//{
//	int index = 0;
//	int answer = 0;
//
//	for (int i = 0;i < w;i++)
//	{
//		for (int j = 0; j < h; j++)
//		{
//			index++;
//			if (index == n)
//			{
//				answer = (j+1) * 100 + (i+1);
//				break;
//			}
//		}
//
//		if (index == n)
//			break;
//	}
//
//	return answer;
//}
//
//int main()
//{
//	int T;
//	int h, w, n;
//	cin >> T;
//
//	for (int i = 0;i < T;i++)
//	{
//		cin >> h >> w >> n;
//		cout << ACM(h, w, n) << "\n";
//	}
//
//	return 0;
//}
//
///*
//
//���α׷��� ǥ�� �Է¿��� �Է� �����͸� �޴´�. ���α׷��� �Է��� T ���� �׽�Ʈ �����ͷ� �̷���� �ִµ� T �� �Է��� �� ù �ٿ� �־�����. �� �׽�Ʈ �����ʹ� �� �����μ� H, W, N, �� ������ �����ϰ� ������ ���� ȣ���� �� ��, �� ���� �� ��, �� ��° �մ������� ��Ÿ����(1 �� H, W �� 99, 1 �� N �� H �� W).
//https://www.acmicpc.net/problem/10250
//
//*/