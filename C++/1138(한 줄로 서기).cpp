//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	int N;
//	
//	cin >> N;
//
//	vector<int> v(N,-1);
//	vector<int> ans(N);
//
//	for (int i = 0;i < N;i++)
//	{
//		cin >> ans[i];
//	}
//
//	v[ans[0]] = 1;
//	
//	int now = ans[0];
//
//	for (int i = 1;i < N;i++)
//	{
//		int gap = (ans[i] - ans[i - 1]);
//		int count = 0;
//
//		if (gap < 0)
//		{
//			int l = 1;
//			count = 1;
//			while (1)
//			{
//				if (v[now - l] == -1)
//				{
//					if (count == -gap)
//					{
//						v[now- l] = i + 1;
//						now = now - l;
//						break;
//					}
//
//					count++;
//					l++;
//				}
//				else
//					l++;
//			}
//		}
//		else
//		{
//			int r = 1;
//
//			while (1)
//			{
//				if (v[now + r] == -1)
//				{
//					if (count == gap)
//					{
//						v[now + r] = i + 1;
//						now = now + r;
//						break;
//					}
//
//					r++;
//					count++;
//				}
//				else
//					r++;
//			}
//		}
//	}
//
//	for (int i = 0;i < N;i++)
//	{
//		cout << v[i] << " ";
//	}
//
//	return 0;
//}
//
///*
//
//ù° �ٿ� ����� �� N�� �־�����. N�� 10���� �۰ų� ���� �ڿ����̴�. ��° �ٿ��� Ű�� 1�� ������� ���ʴ�� �ڱ⺸�� Ű�� ū ����� ���ʿ� �� ���� �־����� �־�����. i��° ���� 0���� ũ�ų� ����, N-i���� �۰ų� ����.
//https://www.acmicpc.net/problem/1138
//
//*/