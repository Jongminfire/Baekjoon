//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//double bridge(int N, int M)
//{
//	double A, B;
//	A = 1;
//	B = 1;
//
//	if(N-M<N/2)
//	{
//		M = N - M;						// N�� M�� ���̰� �� ���� �ʴ°�� ��� �������� overflow�� �߻��ϱ� ������ nCm=nC(n-m) �� ���.
//	}
//
//	for (int i = N;i > N - M;i--)
//	{
//		A *= i;
//	}
//
//	for (int j = 1;j <= M;j++)
//	{
//		B *= j;
//	}
//
//	return (double)(A / B);
//}
//
//int main()
//{
//	int num;
//	cin >> num;
//
//	vector<double> result(num);
//
//	for (int i = 0;i < num;i++)
//	{
//		int N, M;
//		cin >> M >> N;
//
//		if (N == 0 || M == 0)
//		{
//			result[i] = 0;
//		}
//		else
//		result[i] = bridge(N, M);
//	}
//
//	for (int i = 0; i < num;i++)
//	{
//		cout << (int)result[i] << "\n";
//	}
//
//	return 0;
//}
//
///*
//
//�Է��� ù �ٿ��� �׽�Ʈ ���̽��� ���� T�� �־�����. �� ���� �ٺ��� ������ �׽�Ʈ���̽��� ���� ���� ���ʰ� ���ʿ� �ִ� ����Ʈ�� ���� ���� N, M (0 < N �� M < 30)�� �־�����.
//
//*/