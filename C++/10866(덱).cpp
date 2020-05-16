//#include <iostream>
//#include <deque>
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
//	cin >> N;
//
//	deque<int> dq;
//
//	for (int i = 0;i < N;i++)
//	{
//		string s;
//		int num;
//		cin >> s;
//
//		if (s == "push_front")
//		{
//			cin >> num;
//			dq.push_front(num);
//		}
//		else if (s == "push_back")
//		{
//			cin >> num;
//			dq.push_back(num);
//		}
//		else if (s == "pop_front")
//		{
//			if (dq.empty())
//				cout << "-1\n";
//			else
//			{	
//				cout << dq.front() << "\n";
//				dq.pop_front();
//			}
//		}
//		else if (s == "pop_back")
//		{
//			if (dq.empty())
//				cout << "-1\n";
//			else
//			{
//				cout << dq.back() << "\n";
//				dq.pop_back();
//			}
//		}
//		else if (s == "size")
//		{
//			cout << dq.size() << "\n";
//		}
//		else if (s == "empty")
//		{
//			if (dq.empty())
//				cout << "1\n";
//			else
//				cout << "0\n";
//		}
//		else if (s == "front")
//		{
//			if (dq.empty())
//				cout << "-1\n";
//			else
//				cout << dq.front() << "\n";
//		}
//		else if (s == "back")
//		{
//			if (dq.empty())
//				cout << "-1\n";
//			else
//				cout << dq.back() << "\n";
//		}
//	}
//
//	return 0;
//}
//
///*
//
//������ �����ϴ� ��(Deque)�� ������ ����, �Է����� �־����� ����� ó���ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//����� �� ���� �����̴�.
//
//push_front X: ���� X�� ���� �տ� �ִ´�.
//push_back X: ���� X�� ���� �ڿ� �ִ´�.
//pop_front: ���� ���� �տ� �ִ� ���� ����, �� ���� ����Ѵ�. ����, ���� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
//pop_back: ���� ���� �ڿ� �ִ� ���� ����, �� ���� ����Ѵ�. ����, ���� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
//size: ���� ����ִ� ������ ������ ����Ѵ�.
//empty: ���� ��������� 1��, �ƴϸ� 0�� ����Ѵ�.
//front: ���� ���� �տ� �ִ� ������ ����Ѵ�. ���� ���� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
//back: ���� ���� �ڿ� �ִ� ������ ����Ѵ�. ���� ���� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
//
//https://www.acmicpc.net/problem/10866
//
//*/