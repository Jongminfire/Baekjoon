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
//	if (a.x < b.x)
//		return true;
//	else if (a.x == b.x)
//	{
//		if (a.y < b.y)
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
//	for (int i = 0;i < N;i++)
//	{
//		cin >> v[i].x >> v[i].y;
//	}
//
//	sort(v.begin(), v.end(), cmp);
//
//	for (int i = 0 ; i < N;i++)
//	{
//		cout << v[i].x << " " << v[i].y << "\n";
//	}
//
//	return 0;
//}
//
///*
//
//2���� ��� ���� �� N���� �־�����. ��ǥ�� x��ǥ�� �����ϴ� ������, x��ǥ�� ������ y��ǥ�� �����ϴ� ������ ������ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//ù° �ٿ� ���� ���� N (1 �� N �� 100,000)�� �־�����. ��° �ٺ��� N���� �ٿ��� i������ ��ġ xi�� yi�� �־�����. (-100,000 �� xi, yi �� 100,000) ��ǥ�� �׻� �����̰�, ��ġ�� ���� �� ���� ����.
//
//*/