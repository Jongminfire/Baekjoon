//#include <iostream>
//#include <algorithm>
//#include <utility>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//bool cmp(pair<int,string> a , pair<int,string> b)
//{
//	if (a.first < b.first)
//		return true;
//	else if (a.first > b.first)
//		return false;
//	else
//		return 0;				// �� ��� ��� ��ȯ!
//}
//
//int main()
//{
//	int N;
//	cin >> N;
//
//	vector<pair<int, string>> user(N);
//
//	for (int i = 0;i< N ;i++)
//	{
//		cin >> user[i].first >> user[i].second;
//	}
//
//	stable_sort(user.begin(),user.end(), cmp);		// sort�� ���� ������ ���������� �����Ƿ� stable_sort�� ����ؾ���!!!
//
//	for (int i = 0;i < user.size();i++)
//	{
//		cout << user[i].first << " " << user[i].second << "\n";
//	}
//
//	return 0;
//}
//
///*
//ù° �ٿ� �¶��� ���� ȸ���� �� N�� �־�����. (1 �� N �� 100,000)
//
//��° �ٺ��� N���� �ٿ��� �� ȸ���� ���̿� �̸��� �������� ���еǾ� �־�����. ���̴� 1���� ũ�ų� ������, 200���� �۰ų� ���� �����̰�, �̸��� ���ĺ� ��ҹ��ڷ� �̷���� �ְ�, ���̰� 100���� �۰ų� ���� ���ڿ��̴�. �Է��� ������ ������ �־�����.
//https://www.acmicpc.net/problem/10814
//
//*/