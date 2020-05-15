//#include <iostream>
//#include <math.h>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{ 
//	double N;
//	double sum=0;
//	cin >> N;
//
//	vector<double> v(N);
//
//	for (int i = 0;i < N;i++)
//	{
//		cin >> v[i];
//	}
//
//	sort(v.begin(), v.end());
//
//	for (int i = 0;i < N;i++)
//	{
//		v[i] = v[i]/v[v.size()-1]*100;
//		sum += v[i];
//	}
//
//	cout << sum / N << "\n";
//
// 
//	return 0;
//}
//
///*
//ù° �ٿ� ���� �� ������ ���� N�� �־�����. �� ���� 1000���� �۰ų� ����. ��° �ٿ� �������� ���� ������ �־�����. �� ���� 100���� �۰ų� ���� ���� �ƴ� �����̰�, ��� �ϳ��� ���� 0���� ũ��.
//
//https://www.acmicpc.net/problem/1546
//*/