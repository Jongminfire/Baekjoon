//#include <iostream>
//#include <queue>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	cin.tie(nullptr);
//	ios_base::sync_with_stdio(false);
//
//	priority_queue<int, deque<int>, greater<int>> gpq;
//	priority_queue<int, deque<int>, less<int>> lpq;
//
//	int N;
//	int num;
//	cin >> N;
//
//	for (int i = 0;i < N;i++)
//	{
//		cin >> num;
//
//		if (lpq.size() == gpq.size())		//lq�� gq�� �ݹݾ� ���� ����
//			lpq.push(num);
//		else
//			gpq.push(num);
//
//		if(!gpq.empty() && !lpq.empty())
//			if (lpq.top() >= gpq.top())		//���� �߰��� (lq�� top, gq�� top)�� lq�� �� ũ�ٸ� ���� ��ȯ
//			{
//				gpq.push(lpq.top());
//				lpq.push(gpq.top());
//				lpq.pop();
//				gpq.pop();
//			}
//
//		cout << lpq.top()<<"\n";			// �߰����� ���� ���� ����ϹǷ� lpq.top ���
//	}
//
//	return 0;
//}
//
///*
//
//https://www.acmicpc.net/problem/1655
//
//max heap�� min heap���� �߰��� ã�� ��
//priority queue�� �ϳ��� ���� �ð��ʰ� ��
//
//*/