//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	int num;
//	vector<int> v;
//
//	for (int i = 0;i < 10;i++)
//	{
//		cin >> num;
//		sort(v.begin(), v.end());
//
//		if(!binary_search(v.begin(),v.end(),num%42))
//			v.push_back(num % 42);
//	}
//
//	cout << v.size() << "\n";
//
//	return 0;
//}
//
///*
//
//�� �ڿ��� A�� B�� ���� ��, A%B�� A�� B�� ���� ������ �̴�. ���� ���, 7, 14, 27, 38�� 3���� ���� �������� 1, 2, 0, 2�̴�.
//�� 10���� �Է¹��� ��, �̸� 42�� ���� �������� ���Ѵ�. �� ���� ���� �ٸ� ���� �� �� �ִ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//https://www.acmicpc.net/problem/3052
//
//*/