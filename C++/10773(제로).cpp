//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	int K;
//	int sum=0;
//
//	cin >> K;
//
//	vector<int> v;
//
//	for (int i = 0;i <K;i++)
//	{
//		int n;
//		cin >> n;
//
//		if (n == 0)
//			v.pop_back();						// �ǵ� ���� ����
//		else
//			v.push_back(n);						// �ǵڿ� n �ֱ�
//	}
//
//	for (int i = 0;i <v.size();i++)				// v.size ��� K�� ���� �ȵ�.
//	{
//		sum += v[i];
//	}
//
//	cout << sum << "\n";
//
//	return 0;
//}
//
///*
//
//ù ��° �ٿ� ���� K�� �־�����. (1 �� K �� 100,000)
//���� K���� �ٿ� ������ 1���� �־�����. ������ 0���� 1,000,000 ������ ���� ������, ������ "0" �� ��쿡�� ���� �ֱٿ� �� ���� �����, �ƴ� ��� �ش� ���� ����.
//������ "0"�� ��쿡 ���� �� �ִ� ���� ������ ������ �� �ִ�.
//
//https://www.acmicpc.net/problem/10773
//
//*/