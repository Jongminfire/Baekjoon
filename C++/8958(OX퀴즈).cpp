//#include <iostream>
//#include <string>
//#include <string>
//
//using namespace std;
//
//int OX(string s)
//{
//	int o = 1;
//	int ans = 0;
//	for (int i = 0;i < s.size();i++)
//	{
//		if (s[i] == 'O')
//		{
//			ans += o;
//			o++;
//		}
//		else if (s[i] == 'X')
//		{
//			o = 1;
//		}
//	}
//
//	return ans;
//}
//
//int main()
//{
//	string s;
//
//	int N;
//	cin >> N;
//
//	for (int i = 0;i < N;i++)
//	{
//		cin >> s;
//		cout << OX(s) << "\n";
//	}
//
//
//	return 0;
//}
//
///*
//
//ù° �ٿ� �׽�Ʈ ���̽��� ������ �־�����. �� �׽�Ʈ ���̽��� �� �ٷ� �̷���� �ְ�, ���̰� 0���� ũ�� 80���� ���� ���ڿ��� �־�����. ���ڿ��� O�� X������ �̷���� �ִ�.
//https://www.acmicpc.net/problem/8958
//
//*/