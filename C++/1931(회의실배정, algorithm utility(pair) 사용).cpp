//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <utility>
//
//using namespace std;
//
//bool compare(pair<int, int>a, pair<int, int>b)
//{
//	if (a.second < b.second)					// a�� ������ �ð��� b�� ������ �ð��� ���ؼ� a.second<b.second�� �ǰ�.
//		return true;
//	else if (a.second == b.second)				// �� ȸ�ǰ� ���� ������ ��� ���� �����ϴ� ȸ�� ������ ����
//		return a.first < b.first;
//	else
//		return false;
//}
//
//int main()
//{
//	int N;
//	cin >> N;
//
//	vector<pair<int,int>> c(N);
//
//	for (int i = 0;i < N;i++)
//	{
//		cin >> c[i].first >> c[i].second;
//	}
//
//	sort(c.begin(), c.end(),compare);
//
//	int now = 0;
//	int count = 1;
//
//	for (int i = 1;i < N;i++)
//	{
//		if (c[now].second <= c[i].first)				// �ݷ�: 4���� ȸ�ǽ�, ([1 1],[1 1],[1 1],[1 1])�� 4���� �����ϹǷ� <���� <=�� �ٲ��־���
//		{
//			now = i;
//			count++;
//		}
//	}
//
//	cout << count;
//
//	return 0;
//}
//
///*
//ù° �ٿ� ȸ���� �� N(1 �� N �� 100,000)�� �־�����. ��° �ٺ��� N+1 �ٱ��� �� ȸ���� ������ �־����µ� �̰��� ������ ���̿� �ΰ� ȸ���� ���۽ð��� ������ �ð��� �־�����. ���� �ð��� ������ �ð��� 231-1���� �۰ų� ���� �ڿ��� �Ǵ� 0�̴�.
//
//https://www.acmicpc.net/problem/1931
//*/