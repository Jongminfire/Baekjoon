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
//	vector <int> n(M,1);
//
//	for (int i = 0;i < M;i++)
//		cout << n[i] << " ";
//	cout << "\n";
//
//	while (n[0]!=N)
//	{	
//		for (int i = M-1;i>=0;i--)
//		{
//			if (n[i] == N && i!=0)
//			{
//				if (n[i - 1] == N)
//					continue;
//				else
//				n[i-1]++;
//
//				for (int j = i; j < M; j++)
//				{
//					n[j] = n[i-1];
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
//		for (int i = 0;i < M;i++)
//			cout << n[i] <<" ";
//		cout << "\n";
//	}
//
//	return 0;
//}
//
///*
//
//�ڿ��� N�� M�� �־����� ��, �Ʒ� ������ �����ϴ� ���̰� M�� ������ ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//1���� N���� �ڿ��� �߿��� M���� �� ����
//���� ���� ���� �� ��� �ȴ�.
//�� ������ �񳻸������̾�� �Ѵ�.
//���̰� K�� ���� A�� A1 �� A2 �� ... �� AK-1 �� AK�� �����ϸ�, �񳻸������̶�� �Ѵ�.
//
//https://www.acmicpc.net/problem/15652
//
//*/