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
//	string title;
//	string result;
//	int N;
//	int max = 0;
//	cin >> N;
//
//	map<string,int> s;
//	map<string, int>::iterator it;
//
//	for (int i = 0;i < N;i++)
//	{
//		cin >> title;
//
//		if (s.find(title) == s.end())
//			s.insert(make_pair(title, 1));
//		else
//		{
//			s.find(title)->second++;
//		}
//	}
//
//	for (it = s.begin();it != s.end();it++)
//	{
//		if (max < it->second)
//		{
//			max = it->second;
//			result = it->first;
//		}
//	}
//
//	cout << result << "\n";
//
//	return 0;
//}
//
///*
//
//�������� ž������ �����̴�. �������� ���뿡�� ����� �ϴ� �����̴�. �������� �׳� �ٹ��� ���� �Ŀ�, ���� �Ǹ��� å�� ������ ���鼭 ���� ���� �ȸ� å�� ������ ĥ�ǿ� ����� �ϵ� ���� �ϰ� �ִ�.
//���� �Ϸ� ���� �ȸ� å�� ������ �Է����� ������ ��, ���� ���� �ȸ� å�� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//ù° �ٿ� ���� �Ϸ� ���� �ȸ� å�� ���� N�� �־�����. �� ���� 1,000���� �۰ų� ���� �ڿ����̴�. ��°���� N���� �ٿ� å�� ������ �Է����� ���´�. å�� ������ ���̴� 50���� �۰ų� ����, ���ĺ� �ҹ��ڷθ� �̷���� �ִ�.
//
//https://www.acmicpc.net/problem/1302
//
//*/