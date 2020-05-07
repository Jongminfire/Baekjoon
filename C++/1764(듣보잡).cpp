//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	int N, M;
//	cin >> N >> M;
//
//	vector<string> d(N);
//	vector<string> b(M);
//	vector<string> ans;
//
//	for (int i = 0;i < d.size();i++)
//		cin >> d[i];
//
//	for (int i = 0; i < b.size(); i++)
//		cin >> b[i];
//
//	sort(b.begin(), b.end());					// binary_search 사용하기전에 정렬해주기!
//
//	for (int i = 0; i < d.size(); i++)
//	{
//		if (binary_search(b.begin(), b.end(), (string)d[i]) == true)		//binary_search(시작,끝,찾는대상) -> 결과값 있으면 true , 없으면 false
//			ans.push_back(d[i]);
//	}
//
//	sort(ans.begin(), ans.end());				// 정렬다시
//	
//	cout << ans.size() << "\n";
//
//	for (int i = 0; i < ans.size(); i++)
//		cout << ans[i] << "\n";
//
//	return 0;
//}
//
///*
//
//김진영이 듣도 못한 사람의 명단과, 보도 못한 사람의 명단이 주어질 때, 듣도 보도 못한 사람의 명단을 구하는 프로그램을 작성하시오.
//
//https://www.acmicpc.net/problem/1764
//
//(이진탐색)
//
//*/