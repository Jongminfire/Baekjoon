//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	int N,M;
//	cin >> N;
//
//	vector<int> v1(N);
//	
//
//	for (int i = 0;i < N;i++)
//	{
//		cin >> v1[i];
//	}
//
//	cin >> M;
//	vector<int> v2(M);
//
//	for (int i = 0;i < M;i++)
//	{
//		cin >> v2[i];
//	}
//
//	sort(v1.begin(), v1.end());
//
//	for (int i = 0;i < M;i++)
//	{
//		if (binary_search(v1.begin(), v1.end(), v2[i]) == true)
//		{
//			cout << "1\n";
//			
//		}
//		else
//			cout << "0\n";
//	}
//
//	return 0;
//}
//
///*
//
//ù° �ٿ� �ڿ��� N(1��N��100,000)�� �־�����. ���� �ٿ��� N���� ���� A[1], A[2], ��, A[N]�� �־�����. ���� �ٿ��� M(1��M��100,000)�� �־�����. ���� �ٿ��� M���� ������ �־����µ�, �� ������ A�ȿ� �����ϴ��� �˾Ƴ��� �ȴ�. ��� ������ ������ -231 ���� ũ�ų� ���� 231���� �۴�.
//
//https://www.acmicpc.net/problem/1920
//
//*/