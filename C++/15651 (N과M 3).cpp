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
//	bool end = false;
//
//	for (int i = 0;i < M;i++)
//		cout << n[i] << " ";
//
//	if (N == M && N==1)
//		return 0;
//
//	while (end == false)
//	{	
//		cout << "\n";
//
//		for (int i = M-1 ; i >= 0 ; i--)
//		{
//			if (n[i] == N && i!=0)
//			{
//				if (n[i - 1] == N)
//					continue;
//				else
//					n[i-1]++;
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
//		for (int i = 0;i < M;i++)
//			cout << n[i] << " ";
//		
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
//
//1���� N���� �ڿ��� �߿��� M���� �� ����
//���� ���� ���� �� ��� �ȴ�.
//
//https://www.acmicpc.net/problem/15651
//
//Ǯ�� : 15652���� 30��°�� n[j] = n[i-1];�� n[j]=1 �� ���� ��, bool end �� �˻�
//*/