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
//준규가 가지고 있는 동전은 총 N종류이고, 각각의 동전을 매우 많이 가지고 있다.
//동전을 적절히 사용해서 그 가치의 합을 K로 만들려고 한다. 이때 필요한 동전 개수의 최솟값을 구하는 프로그램을 작성하시오.
//
//https://www.acmicpc.net/problem/11047
//
//*/