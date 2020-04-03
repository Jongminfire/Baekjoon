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
//		M = N - M;						// N과 M이 차이가 얼마 나지 않는경우 계산 과정에서 overflow가 발생하기 때문에 nCm=nC(n-m) 을 사용.
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
//입력의 첫 줄에는 테스트 케이스의 개수 T가 주어진다. 그 다음 줄부터 각각의 테스트케이스에 대해 강의 서쪽과 동쪽에 있는 사이트의 개수 정수 N, M (0 < N ≤ M < 30)이 주어진다.
//
//*/