//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	int N;
//
//	cin >> N;
//
//	vector<int> v;
//
//	for (int i = 0;i < N;i++)
//	{
//		int num;
//		cin >> num;
//		v.push_back(num);
//	}
//
//	sort(v.begin(), v.end());
//
//	for (int i = 0; i < v.size();i++)
//	{
//		cout << v[i]<<"\n";
//	}
//
//	return 0;
//}
//
///*
//
//<����>
//N���� ���� �־����� ��, �̸� ������������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//�ð� ���⵵�� O(nlogn)�� ���� �˰������� Ǯ �� �ֽ��ϴ�. ���� ��� ���� ����, �� ���� ���� ������, ����� �˰����̹Ƿ� ������ �� ����� ���� �Լ��� ���� ���� ��õ�帳�ϴ�.
//
//<��>
// algorithm ����� ���Ե� sort() �Լ��� �ذ�
//
//*/