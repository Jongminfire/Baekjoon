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
//		cout << upper_bound(vn.begin(), vn.end(), vm[i]) - lower_bound(vn.begin(), vn.end(), vm[i]) << " ";		//�ִ�-�ּ�
//	}
//	
//	cout << "\n";
//
//	return 0;
//}
//
///*
//
//���� ī��� ���� �ϳ��� ������ �ִ� ī���̴�. ����̴� ���� ī�� N���� ������ �ִ�. ���� M���� �־����� ��, �� ���� �����ִ� ���� ī�带 ����̰� �� �� ������ �ִ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//https://www.acmicpc.net/problem/10816
//
//*/