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
//정수를 저장하는 덱(Deque)를 구현한 다음, 입력으로 주어지는 명령을 처리하는 프로그램을 작성하시오.
//
//명령은 총 여덟 가지이다.
//
//push_front X: 정수 X를 덱의 앞에 넣는다.
//push_back X: 정수 X를 덱의 뒤에 넣는다.
//pop_front: 덱의 가장 앞에 있는 수를 빼고, 그 수를 출력한다. 만약, 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
//pop_back: 덱의 가장 뒤에 있는 수를 빼고, 그 수를 출력한다. 만약, 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
//size: 덱에 들어있는 정수의 개수를 출력한다.
//empty: 덱이 비어있으면 1을, 아니면 0을 출력한다.
//front: 덱의 가장 앞에 있는 정수를 출력한다. 만약 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
//back: 덱의 가장 뒤에 있는 정수를 출력한다. 만약 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
//
//https://www.acmicpc.net/problem/10866
//
//*/