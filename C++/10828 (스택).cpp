//#include <iostream>
//#include <stack>
//#include <string>			//string�� ��������.
//
//using namespace std;
//
//int main()
//{
//	int N;
//	stack<int> s;
//
//	cin >> N;
//	
//	for (int i = 0;i < N;i++)
//	{
//		string c;
//		int num=0;
//
//		cin >> c;
//
//		if (c == "push")
//		{
//			cin >> num;
//			s.push(num);
//		}
//		else if (c == "top")
//		{
//			if (s.empty() == 1)
//				cout << "-1\n";
//			else
//			{
//				num = s.top();
//				cout << s.top() << "\n";
//			}
//		}
//		else if (c == "size")
//			cout << s.size() << "\n";
//		else if (c == "empty")
//			cout << s.empty() << "\n";
//		else if (c == "pop")
//		{
//			if (s.empty() == 1)
//				cout << "-1\n";
//			else
//			{
//				cout << s.top() << "\n";
//				s.pop();
//			}
//		}
//	}
//
//	return 0;
//}
//
///*
//
//ù° �ٿ� �־����� ����� �� N (1 �� N �� 10,000)�� �־�����. ��° �ٺ��� N���� �ٿ��� ����� �ϳ��� �־�����. �־����� ������ 1���� ũ�ų� ����, 100,000���� �۰ų� ����. ������ �������� ���� ����� �־����� ���� ����.
//
//*/