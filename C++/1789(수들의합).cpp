//#include <iostream>
//#include <vector>
//#include <math.h>
//#define MAX 4294967295
//
//using namespace std;
//
//int main()
//{
//	long long S;
//	cin >> S;
//
//	long long s2 = sqrt(2 * S);
//	long long result = 0;
//
//	for (int i = s2; i<=MAX ;i++)
//	{
//		if (pow(i, 2) + i > 2 * S)
//		{
//			result = i - 1;
//			break;
//		}
//		else if (pow(i, 2) + i == 2 * S)
//		{
//			result = i;
//			break;
//		}
//	}
//	cout << result << "\n";
//
//	return 0;
//}
//
///*
//
//���� �ٸ� N���� �ڿ����� ���� S��� �Ѵ�. S�� �� ��, �ڿ��� N�� �ִ��� ���ϱ�?
//https://www.acmicpc.net/problem/1789
//
//*/