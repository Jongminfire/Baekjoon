//#include <iostream>
//#include <queue>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	int N;
//	int num;
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
//			cin >> num;
//			q.push(num);
//		}
//		else if (s == "front")
//		{
//			if (q.empty())
//				cout << "-1\n";
//			else
//			{
//				cout << q.front() << "\n";
//			}
//		}
//		else if (s == "back")
//		{
//			if (q.empty())
//				cout << "-1\n";
//			else
//			{
//				cout << q.back() << "\n";
//			}
//		}
//		else if (s == "size")
//		{
//			cout << q.size() << "\n";
//		}
//		else if (s == "empty")
//		{
//			cout << q.empty() << "\n";
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
//push X: ���� X�� ť�� �ִ� �����̴�.
//pop: ť���� ���� �տ� �ִ� ������ ����, �� ���� ����Ѵ�. ���� ť�� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
//size: ť�� ����ִ� ������ ������ ����Ѵ�.
//empty: ť�� ��������� 1, �ƴϸ� 0�� ����Ѵ�.
//front: ť�� ���� �տ� �ִ� ������ ����Ѵ�. ���� ť�� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
//back: ť�� ���� �ڿ� �ִ� ������ ����Ѵ�. ���� ť�� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
//
//https://www.acmicpc.net/problem/10845
//
//*/