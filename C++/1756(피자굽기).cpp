//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	int D, N;
//	cin >> D >> N;
//
//	int num;
//
//	vector<int> v(300001);
//	vector<int> pizza(300001);
//
//	v[0] = 1000000001;					// 10억 이하의 자연수
//
//	for (int i = 1;i <=D;i++)
//	{
//		cin >> num;
//		v[i] = min(num, v[i - 1]);		// 피자가 들어갈 수 있는 오븐의 지름은 깊이가 깊어질수록 점점 작아지므로
//	}
//
//	for (int i = 1;i <=N;i++)
//	{
//		cin >> pizza[i];
//	}
//
//	if (N == 0)
//	{
//		cout << D << "\n";
//		return 0;
//	}
//
//	int index = 1;
//
//	for (int i = D;i > 0;i--)	// 맨 아래 오븐 부터
//	{
//		if (pizza[index] <= v[i])
//			index+=1;
//		else
//			continue;
//
//		if (index > N)						// index값이 N보다 커질 경우
//		{
//			cout << i;
//			return 0;
//		}
//	}
//						
//	cout << 0;						// 피자가 다 안들어가는 경우
//
//	return 0;
//}
//
///*
//
//첫째 줄에 오븐의 깊이 D와 피자 반죽의 개수 N이 공백을 사이에 두고 주어진다. (1<=D, N<=300,000) 둘째 줄에는 오븐의 최상단부터 시작하여 깊이에 따른 오븐의 지름이 차례대로 주어진다. 셋째 줄에는 피자 반죽이 완성되는 순서대로, 그 각각의 지름이 주어진다. 오븐의 지름이나 피자 반죽의 지름은 10억 이하의 자연수이다.
//
//https://www.acmicpc.net/problem/1756
//
//*/