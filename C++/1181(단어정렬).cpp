//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//bool cmp(string a, string b)
//{
//	if (a.size() < b.size())
//		return true;
//	else if (a.size() == b.size())
//	{
//		int index = 0;
//
//		while (index!=a.size())
//		{
//			if ((int)a[index] < (int)b[index])
//				return true;
//			else if ((int)a[index] > (int)b[index])
//				return false;
//			else
//				index++;
//		}
//
//		return false;
//	}
//	else
//		return false;
//}
//
//int main()
//{
//	int N;
//	cin >> N;
//
//	vector<string> v(N);
//
//	for (int i = 0;i < N;i++)
//	{
//		cin >> v[i];
//	}
//
//	sort(v.begin(), v.end(), cmp);
//
//	for (int i = 0; i < N; i++)
//	{
//		if (i == 0)
//			cout << v[i] << "\n";
//		else
//			if (v[i] != v[i - 1])
//				cout << v[i] << "\n";
//	}
//
//	return 0;
//}
//
///*
//
//���ĺ� �ҹ��ڷ� �̷���� N���� �ܾ ������ �Ʒ��� ���� ���ǿ� ���� �����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//1.���̰� ª�� �ͺ���
//2.���̰� ������ ���� ������
//
//https://www.acmicpc.net/problem/1181
//
//*/