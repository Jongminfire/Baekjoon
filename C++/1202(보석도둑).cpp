//#include <iostream>
//#include <queue>
//#include <set>	
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	priority_queue < pair<int, int>, deque<pair<int, int>>, less<pair<int, int>>> gem;
//	multiset<int> bag;
//	multiset<int>::iterator it;
//
//	long long ans = 0;
//	int w, v;
//	int n, k;
//	cin >> n >> k;
//
//	for (int i = 0;i < n;i++)
//	{
//		cin >> w >> v;
//		gem.push(make_pair(v, w));
//	}
//
//	for (int i = 0;i < k;i++)
//	{
//		cin >> w;
//		bag.insert(w);
//	}
//
//	while (!bag.empty() && !gem.empty())
//	{
//		it = bag.lower_bound(gem.top().second);
//
//		if (it != bag.end())
//		{
//			bag.erase(it);
//			ans += gem.top().first;
//		}
//
//		gem.pop();
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}
//
///*
//
//우선순위 큐로 푸는문제.
//처음에는 가방도 우선순위 큐로 했으나 multiset으로 해야 시간초과가 나지않음.
//lower_bound도 multiset의 lowerbound를 사용하지 않으면 시간초과가 나므로 multiset의 lowerbound를 써야 했음
//
//https://www.acmicpc.net/submit/1202/20207433
//
//*/