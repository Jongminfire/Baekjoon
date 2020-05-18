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
//첫째 줄에 주어지는 명령의 수 N (1 ≤ N ≤ 2,000,000)이 주어진다. 둘째 줄부터 N개의 줄에는 명령이 하나씩 주어진다. 주어지는 정수는 1보다 크거나 같고, 100,000보다 작거나 같다. 문제에 나와있지 않은 명령이 주어지는 경우는 없다.
//
//cout,cin이 시간이 오래 걸리게 되므로 
//
//cin.tie(nullptr);
//ios_base::sync_with_stdio(false);
//
//를 추가해 없애야 했음
//
//https://www.acmicpc.net/problem/18258
//
//*/