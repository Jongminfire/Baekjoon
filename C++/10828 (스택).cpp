//#include <iostream>
//#include <stack>
//#include <string>			//string을 받으려면.
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
//첫째 줄에 주어지는 명령의 수 N (1 ≤ N ≤ 10,000)이 주어진다. 둘째 줄부터 N개의 줄에는 명령이 하나씩 주어진다. 주어지는 정수는 1보다 크거나 같고, 100,000보다 작거나 같다. 문제에 나와있지 않은 명령이 주어지는 경우는 없다.
//
//*/