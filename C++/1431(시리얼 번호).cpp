//#include <vector>
//#include <iostream>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//bool dic(string a, string b)
//{
//	for (int i = 0;i < a.size();i++)
//	{
//			if (a[i] < b[i])
//				return true;
//			else if (a[i] > b[i])
//				return false;
//	}
//
//	return true;
//}
//
//bool cmp(string a, string b)
//{
//	int sum_a = -1;
//	int sum_b = -1;
//
//	if (a.size() < b.size())
//		return true;
//	else if(a.size() > b.size())
//		return false;
//	else
//	{
//		for (int i = 0;i < a.size();i++)
//		{
//			if (a[i] >= '0' && a[i] <= '9')
//				sum_a += (a[i] - '0');
//			if (b[i] >= '0' && b[i] <= '9')
//				sum_b += (b[i] - '0');
//		}
//
//		if (sum_a < sum_b)
//			return true;
//		else if (sum_a > sum_b)
//			return false;
//		else
//			return dic(a, b);
//	}
//}
//
//int main()
//{
//	int N;
//	cin >> N;
//
//	vector<string> s(N);
//
//	for (int i = 0;i < N;i++)
//	{
//		cin >> s[i];
//	}
//
//	sort(s.begin(), s.end(), cmp);
//
//	for (int i = 0;i < N;i++)
//	{
//		cout << s[i] << "\n";
//	}
//
//	return 0;
//}
//
///*
//
//ù° �ٿ� ��Ÿ�� ���� N�� �־�����. N�� 1,000���� �۰ų� ����. ��° �ٺ��� N���� �ٿ� �ø��� ��ȣ�� �ϳ��� �־�����. �ø��� ��ȣ�� ���̴� �ִ� 50�̰�, ���ĺ� �빮�� �Ǵ� ���ڷθ� �̷���� �ִ�. �ø��� ��ȣ�� �ߺ����� �ʴ´�.
//
//https://www.acmicpc.net/problem/1431
//
//*/