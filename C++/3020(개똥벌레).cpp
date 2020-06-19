//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//
//	int N, H;
//	int ans = 888888888;
//	int num,index;
//	cin >> N >> H;
//
//	vector<int> s1;
//	vector<int> s2;
//
//	for (int i = 0;i < N;i++)
//	{
//		cin >> num;
//
//		if (i % 2 == 1)
//			s1.push_back(num);		//홀수
//		else 
//			s2.push_back(num);		//짝수
//	}
//
//	sort(s1.begin(), s1.end());
//	sort(s2.begin(), s2.end());
//
//	for (int i = 1;i <=H;i++)
//	{
//		int sum = 0;
//
//		sum += s1.size() - (lower_bound(s1.begin(), s1.end(), i) - s1.begin());			//iterator 범위로 (전체-i크기)
//		sum += s2.size() - (lower_bound(s2.begin(), s2.end(), H-i+1) - s2.begin());		//iterator 범위로 (전체-(H-i+1)크기)
//
//		if (sum < ans)
//		{
//			ans = sum;
//			index = 1;
//		}
//		else if (sum == ans)
//		{
//			index++;
//		}
//	}
//
//	cout << ans << " "<<index<<"\n";
//
//	return 0;
//}
//
///*
//
//https://jaimemin.tistory.com/1109
//
//처음에는 multiset으로 접근한 뒤 count 함수를 사용해서 계산했는데 시간 초과가 나서
//lower_bound를 사용해야겠다고 생각.
//multiset으로는 lower_bound 크기 계산이 어려워서 vector로 풀이
//
//*/