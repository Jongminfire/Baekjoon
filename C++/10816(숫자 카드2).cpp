//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	vector<int> vn;
//	vector<int> vm;
//
//	int N, M;
//	int num;
//	cin >> N;
//	
//	for (int i = 0;i < N;i++)
//	{
//		cin >> num;
//		vn.push_back(num);
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
//	for (int i = 0; i < M;i++)
//	{
//		cout << upper_bound(vn.begin(), vn.end(), vm[i]) - lower_bound(vn.begin(), vn.end(), vm[i]) << " ";		//최대-최소
//	}
//	
//	cout << "\n";
//
//	return 0;
//}
//
///*
//
//숫자 카드는 정수 하나가 적혀져 있는 카드이다. 상근이는 숫자 카드 N개를 가지고 있다. 정수 M개가 주어졌을 때, 이 수가 적혀있는 숫자 카드를 상근이가 몇 개 가지고 있는지 구하는 프로그램을 작성하시오.
//
//https://www.acmicpc.net/problem/10816
//
//*/