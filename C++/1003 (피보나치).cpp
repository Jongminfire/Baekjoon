//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//vector<int> v(41,0);
//
//int fibonacci(int n) {
//	if (n == 0) {
//		v[0] = 0;
//		return 0;
//	}
//	else if (n == 1) {
//		v[1] = 1;
//		return 1;
//	}
//	else if (v[n] != 0)
//	{
//		return v[n];
//	}
//	else
//	{
//		return v[n] = fibonacci(n - 1) + fibonacci(n - 2);
//	}
//}
//
//int main()
//{
//	int T;
//	cin >> T;
//
//	vector<int> n(T);
//
//	for (int i = 0;i < T;i++)
//	{
//		cin >> n[i];
//	}
//
//	for (int i = 0;i < T;i++)
//	{
//		fibonacci(n[i]);
//
//		if (n[i] != 0)
//			cout << v[n[i] - 1] << " " << v[n[i]] << "\n";
//		else
//			cout << "1 0\n";
//	}
//
//	return 0;
//}
//
///*
//
//ù° �ٿ� �׽�Ʈ ���̽��� ���� T�� �־�����.
//�� �׽�Ʈ ���̽��� �� �ٷ� �̷���� �ְ�, N�� �־�����. N�� 40���� �۰ų� ���� �ڿ��� �Ǵ� 0�̴�.
//
//https://www.acmicpc.net/problem/1003
//
//*/