//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <map>
//
//using namespace std;
//
//int main()
//{
//	string name;
//	string title;
//	int tc;
//	cin >> tc;
//
//	for (int j = 0;j < tc;j++)
//	{
//		int N;
//		cin >> N;
//		map<string, int> s;
//		map<string, int>::iterator it;
//		int result = 1;
//
//		for (int i = 0;i < N;i++)
//		{
//			cin >> name >> title;
//
//			if (s.find(title) == s.end())
//				s.insert(make_pair(title, 1));
//			else
//				s.find(title)->second++;
//		}
//
//		if (s.empty())
//		{
//			cout << "0\n";
//			continue;
//		}
//		
//		for (it = s.begin();it != s.end();it++)
//		{
//			result *= it->second+1;			// ����+1 �� ���� ��� ����Ǽ�
//		}
//
//		cout << result -1<< "\n";			// ��� ���Դ� ��츸 ����
//	}
//
//	return 0;
//}
//
///*
//
//ù° �ٿ� �׽�Ʈ ���̽��� �־�����. �׽�Ʈ ���̽��� �ִ� 100�̴�.
//
//�� �׽�Ʈ ���̽��� ù° �ٿ��� �غ��̰� ���� �ǻ��� �� n(0 �� n �� 30)�� �־�����.
//���� n������ �غ��̰� ���� �ǻ��� �̸��� �ǻ��� ������ �������� ���еǾ� �־�����. ���� ������ �ǻ��� �ϳ��� ���� �� �ִ�.
//��� ���ڿ��� 1�̻� 20������ ���ĺ� �ҹ��ڷ� �̷���������� ���� �̸��� ���� �ǻ��� �������� �ʴ´�.
//
//https://www.acmicpc.net/problem/9375
//
//map ���
//
//*/