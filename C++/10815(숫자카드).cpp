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
//���� ī��� ���� �ϳ��� ������ �ִ� ī���̴�. ����̴� ���� ī�� N���� ������ �ִ�. ���� M���� �־����� ��, �� ���� �����ִ� ���� ī�带 ����̰� ������ �ִ��� �ƴ����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//https://www.acmicpc.net/problem/10815
//
//*/