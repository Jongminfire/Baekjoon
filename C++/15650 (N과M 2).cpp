//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	int N, M;
//	cin >> N >> M;
//
//	vector <int> n(M, 1);
//
//	if(M==1)
//		cout << n[0] << "\n";
//
//	while (n[0] != N)
//	{
//		vector<int> check(N+1);
//		bool dup = false;
//
//		for (int i = M - 1 ; i >= 0;i--)
//		{
//			if (n[i] == N && i != 0)
//			{
//				if (n[i - 1] == N)
//					continue;
//				else
//					n[i - 1]++;
//
//				for (int j = i; j < M; j++)
//				{
//					n[j] = n[i - 1];
//				}
//
//				break;
//			}
//
//			else if (n[i] != N)
//			{
//				n[i]++;
//				break;
//			}
//		}
//
//		for (int i = 0; i < M; i++)
//		{
//			check[n[i]]++;
//
//			if (check[n[i]] > 1)
//				dup = true;
//		}
//
//		if (dup == false)
//		{
//			for (int i = 0;i < M;i++)
//				cout << n[i] << " ";
//			cout << "\n";
//		}
//	}
//
//	return 0;
//}
//
///*
//
//�ڿ��� N�� M�� �־����� ��, �Ʒ� ������ �����ϴ� ���̰� M�� ������ ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//1���� N���� �ڿ��� �߿��� �ߺ� ���� M���� �� ����
//�� ������ ���������̾�� �Ѵ�.
//
//https://www.acmicpc.net/problem/15650
//
//Ǯ�� : 15652���� �ߺ��� �˻��ϴ� vector check�� �߰���
//
//*/