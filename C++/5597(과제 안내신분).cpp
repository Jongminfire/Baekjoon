//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	vector<int> v(30,0);
//	vector<int> ans;
//
//	for (int i = 0;i < v.size()-2;i++)
//	{
//		int num;
//		cin >> num;
//		v[num - 1]++;
//	}
//
//	for (int i = 0;i < v.size();i++)
//	{
//		if (v[i] == 0)
//			ans.push_back(i);
//	}
//
//	cout << ans[0] + 1 << "\n";
//	cout << ans[1] + 1 << "\n";
//
//	return 0;
//}
//
///*
//
//X대학 M교수님은 프로그래밍 수업을 맡고 있습니다. 교실엔 학생이 30명이 있는데, 학생 명부엔 각 학생별로 1번부터 30번까지 출석번호가 붙어 있습니다.
//
//교수님이 내준 특별과제를 28명이 제출했는데, 그 중에서 제출 안 한 학생 2명의 출석번호를 구하는 프로그램을 작성하세요.
//
//https://www.acmicpc.net/problem/5597
//
//*/