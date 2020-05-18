//#include <iostream>
//#include <queue>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	cin.tie(nullptr);
//	ios_base::sync_with_stdio(false);
//
//	int N;
//	string s;
//	cin >> N;
//
//	queue<int> q;
//
//	for (int i = 0;i < N;i++)
//	{
//		cin >> s;
//
//		if (s == "push")
//		{
//			int num;
//			cin >> num;
//
//			q.push(num);
//		}
//		else if (s == "front")
//		{
//			if (q.empty())
//				cout << "-1\n";
//			else
//				cout << q.front() << "\n";
//		}
//		else if (s == "size")
//		{
//			cout << q.size() << "\n";
//		}
//		else if (s == "back")
//		{
//			if (q.empty())
//				cout << "-1\n";
//			else
//				cout << q.back() << "\n";
//		}
//		else if (s == "empty")
//		{
//			if (q.empty())
//				cout << "1\n";
//			else
//				cout << "0\n";
//		}
//		else if (s == "pop")
//		{
//			if (q.empty())
//				cout << "-1\n";
//			else
//			{
//				cout << q.front() << "\n";
//				q.pop();
//			}
//		}
//	}
//
//	return 0;
//}
//
///*
//
//ù° �ٿ� �־����� ����� �� N (1 �� N �� 2,000,000)�� �־�����. ��° �ٺ��� N���� �ٿ��� ����� �ϳ��� �־�����. �־����� ������ 1���� ũ�ų� ����, 100,000���� �۰ų� ����. ������ �������� ���� ����� �־����� ���� ����.
//
//cout,cin�� �ð��� ���� �ɸ��� �ǹǷ� 
//
//cin.tie(nullptr);
//ios_base::sync_with_stdio(false);
//
//�� �߰��� ���־� ����
//
//https://www.acmicpc.net/problem/18258
//
//*/