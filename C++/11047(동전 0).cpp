//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int mincoin(vector<int> &coin, int K)
//{
//	int count = 0;
//	int remain = K;
//
//	for (int i = (coin.size() - 1);i >= 0;i--)
//	{
//		if (remain == 0)
//			break;
//
//		if (remain / coin[i] != 0)
//		{
//			count += (remain / coin[i]);
//			remain = (remain%coin[i]);
//		}
//	}
//
//	return count;
//}
//
//int main()
//{
//	int N, K;
//	
//	cin >> N >> K;
//
//	vector<int> coin(N);
//
//	for (int i = 0;i < N;i++)
//	{
//		cin >> coin[i];
//	}
//
//	cout << mincoin(coin, K) <<"\n";
//
//	return 0;
//}
//
///*
//
//�ر԰� ������ �ִ� ������ �� N�����̰�, ������ ������ �ſ� ���� ������ �ִ�.
//������ ������ ����ؼ� �� ��ġ�� ���� K�� ������� �Ѵ�. �̶� �ʿ��� ���� ������ �ּڰ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//https://www.acmicpc.net/problem/11047
//
//*/