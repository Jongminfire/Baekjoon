//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int N;
//	int result = 0;
//	cin >> N;
//
//	vector<int> v(N);
//
//	for (int i = 0;i < N;i++)
//	{
//		cin >> v[i];
//	}
//
//	for (int i = N-1;i >0;i--)					// 4, 6 5 4 8 �ΰ�� (�ݷ�), ���� �ں��� ����
//	{
//		if (v[i] <= v[i -1])
//		{
//			result += v[i-1] - v[i] + 1;
//			v[i - 1] = v[i] - 1;
//		}
//	}
//	
//	cout << result << "\n";
//
//	return 0;
//}
//
///*
//
//ù° �ٿ� ������ �� N�� �־�����. (1 �� N �� 100) ���� N�� �ٿ��� �� ������ Ŭ�����ϸ� ��� ������ ù ��° �������� ������ �������� ������� �־�����. ������ 20,000���� ���� ���� �����̴�.
//
//https://www.acmicpc.net/problem/2847
//
//
//*/