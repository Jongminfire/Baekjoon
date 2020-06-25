//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <map>
//
//using namespace std;
//
//int main()
//{
//	string name;
//	string title;
//	int tc;
//	cin >> tc;
//
//	for (int j = 0;j < tc;j++)
//	{
//		int N;
//		cin >> N;
//		map<string, int> s;
//		map<string, int>::iterator it;
//		int result = 1;
//
//		for (int i = 0;i < N;i++)
//		{
//			cin >> name >> title;
//
//			if (s.find(title) == s.end())
//				s.insert(make_pair(title, 1));
//			else
//				s.find(title)->second++;
//		}
//
//		if (s.empty())
//		{
//			cout << "0\n";
//			continue;
//		}
//		
//		for (it = s.begin();it != s.end();it++)
//		{
//			result *= it->second+1;			// 종류+1 의 곱은 모든 경우의수
//		}
//
//		cout << result -1<< "\n";			// 모두 안입는 경우만 빼줌
//	}
//
//	return 0;
//}
//
///*
//
//첫째 줄에 테스트 케이스가 주어진다. 테스트 케이스는 최대 100이다.
//
//각 테스트 케이스의 첫째 줄에는 해빈이가 가진 의상의 수 n(0 ≤ n ≤ 30)이 주어진다.
//다음 n개에는 해빈이가 가진 의상의 이름과 의상의 종류가 공백으로 구분되어 주어진다. 같은 종류의 의상은 하나만 입을 수 있다.
//모든 문자열은 1이상 20이하의 알파벳 소문자로 이루어져있으며 같은 이름을 가진 의상은 존재하지 않는다.
//
//https://www.acmicpc.net/problem/9375
//
//map 사용
//
//*/