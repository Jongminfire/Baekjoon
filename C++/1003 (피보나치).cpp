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
//첫째 줄에 테스트 케이스의 개수 T가 주어진다.
//각 테스트 케이스는 한 줄로 이루어져 있고, N이 주어진다. N은 40보다 작거나 같은 자연수 또는 0이다.
//
//https://www.acmicpc.net/problem/1003
//
//*/