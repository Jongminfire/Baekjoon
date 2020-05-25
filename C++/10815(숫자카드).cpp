//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	int N, M;
//	vector<int> vn;
//	vector<int> vm;
//
//	cin >> N;
//	vn.resize(N);
//
//	for (int i = 0;i < N;i++)
//	{
//		cin >> vn[i];
//	}
//
//	sort(vn.begin(), vn.end());
//
//	cin >> M;
//	vm.resize(M);
//
//	for (int i = 0;i < M;i++)
//	{
//		cin >> vm[i];
//	}
//
//	for (int i = 0;i < M;i++)
//	{
//		if (binary_search(vn.begin(), vn.end(), vm[i]))
//			cout << "1 ";
//		else
//			cout << "0 ";
//	}
//
//	cout << "\n";
//
//	return 0;
//}
//
///*
//
//숫자 카드는 정수 하나가 적혀져 있는 카드이다. 상근이는 숫자 카드 N개를 가지고 있다. 정수 M개가 주어졌을 때, 이 수가 적혀있는 숫자 카드를 상근이가 가지고 있는지 아닌지를 구하는 프로그램을 작성하시오.
//
//https://www.acmicpc.net/problem/10815
//
//*/