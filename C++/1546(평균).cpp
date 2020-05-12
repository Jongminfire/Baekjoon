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
//첫째 줄에 시험 본 과목의 개수 N이 주어진다. 이 값은 1000보다 작거나 같다. 둘째 줄에 세준이의 현재 성적이 주어진다. 이 값은 100보다 작거나 같은 음이 아닌 정수이고, 적어도 하나의 값은 0보다 크다.
//
//https://www.acmicpc.net/problem/1546
//*/