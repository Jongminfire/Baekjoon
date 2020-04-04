//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	int K;
//	int sum=0;
//
//	cin >> K;
//
//	vector<int> v;
//
//	for (int i = 0;i <K;i++)
//	{
//		int n;
//		cin >> n;
//
//		if (n == 0)
//			v.pop_back();						// 맨뒤 원소 제거
//		else
//			v.push_back(n);						// 맨뒤에 n 넣기
//	}
//
//	for (int i = 0;i <v.size();i++)				// v.size 대신 K가 들어가면 안됨.
//	{
//		sum += v[i];
//	}
//
//	cout << sum << "\n";
//
//	return 0;
//}
//
///*
//
//첫 번째 줄에 정수 K가 주어진다. (1 ≤ K ≤ 100,000)
//이후 K개의 줄에 정수가 1개씩 주어진다. 정수는 0에서 1,000,000 사이의 값을 가지며, 정수가 "0" 일 경우에는 가장 최근에 쓴 수를 지우고, 아닐 경우 해당 수를 쓴다.
//정수가 "0"일 경우에 지울 수 있는 수가 있음을 보장할 수 있다.
//
//https://www.acmicpc.net/problem/10773
//
//*/