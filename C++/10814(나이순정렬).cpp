//#include <iostream>
//#include <algorithm>
//#include <utility>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//bool cmp(pair<int,string> a , pair<int,string> b)
//{
//	if (a.first < b.first)
//		return true;
//	else if (a.first > b.first)
//		return false;
//	else
//		return 0;				// 꼭 모든 경우 반환!
//}
//
//int main()
//{
//	int N;
//	cin >> N;
//
//	vector<pair<int, string>> user(N);
//
//	for (int i = 0;i< N ;i++)
//	{
//		cin >> user[i].first >> user[i].second;
//	}
//
//	stable_sort(user.begin(),user.end(), cmp);		// sort는 기존 순서를 보장해주지 않으므로 stable_sort를 사용해야함!!!
//
//	for (int i = 0;i < user.size();i++)
//	{
//		cout << user[i].first << " " << user[i].second << "\n";
//	}
//
//	return 0;
//}
//
///*
//첫째 줄에 온라인 저지 회원의 수 N이 주어진다. (1 ≤ N ≤ 100,000)
//
//둘째 줄부터 N개의 줄에는 각 회원의 나이와 이름이 공백으로 구분되어 주어진다. 나이는 1보다 크거나 같으며, 200보다 작거나 같은 정수이고, 이름은 알파벳 대소문자로 이루어져 있고, 길이가 100보다 작거나 같은 문자열이다. 입력은 가입한 순서로 주어진다.
//https://www.acmicpc.net/problem/10814
//
//*/