//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	int N, M;
//	bool end = false;
//
//	cin >> N >> M;
//	
//	vector <int> n(M, 1);
//
//	if (M == 1)
//		cout << n[0] << "\n";
//
//	if (N == M && N == 1)
//		return 0;
//
//	while (end == false)
//	{
//		vector<int> check(N + 1);
//		bool dup = false;
//
//		for (int i = M - 1; i >= 0;i--)
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
//					n[j] = 1;
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
//
//		end = true;
//
//		for (int i = 0; i < M; i++)
//		{
//			if (n[i] != N)
//				end = false;
//		}
//	}
//
//	return 0;
//}
//
///*
//
//�ڿ��� N�� M�� �־����� ��, �Ʒ� ������ �����ϴ� ���̰� M�� ������ ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
//1���� N���� �ڿ��� �߿��� �ߺ� ���� M���� �� ����
//
//https://www.acmicpc.net/problem/15649
//
//Ǯ�� : 15652�� ������� 15650 �� 15651�� ������
//
//*/