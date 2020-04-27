//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//struct coor
//{
//	int x;
//	int y;
//};
//
//bool cmp(coor a, coor b)
//{
//	if (a.y < b.y)
//		return true;
//	else if (a.y == b.y)
//	{
//		if (a.x < b.x)
//			return true;
//		else
//			return false;
//	}
//	else
//		return false;
//}
//
//int main()
//{
//	int N;
//
//	cin >> N;
//
//	vector<coor> v(N);
//
//	for (int i = 0; i < N; i++)
//	{
//		cin >> v[i].x >> v[i].y;
//	}
//
//	sort(v.begin(), v.end(), cmp);
//
//	for (int i = 0; i < N; i++)
//	{
//		cout << v[i].x << " " << v[i].y << "\n";
//	}
//
//	return 0;
//}
//
///*
//
//2차원 평면 위의 점 N개가 주어진다. 좌표를 y좌표가 증가하는 순으로, y좌표가 같으면 x좌표가 증가하는 순서로 정렬한 다음 출력하는 프로그램을 작성하시오.
//첫째 줄에 점의 개수 N (1 ≤ N ≤ 100,000)이 주어진다. 둘째 줄부터 N개의 줄에는 i번점의 위치 xi와 yi가 주어진다. (-100,000 ≤ xi, yi ≤ 100,000) 좌표는 항상 정수이고, 위치가 같은 두 점은 없다.
//
//https://www.acmicpc.net/problem/11651
//
//*/