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
//	string title;
//	string result;
//	int N;
//	int max = 0;
//	cin >> N;
//
//	map<string,int> s;
//	map<string, int>::iterator it;
//
//	for (int i = 0;i < N;i++)
//	{
//		cin >> title;
//
//		if (s.find(title) == s.end())
//			s.insert(make_pair(title, 1));
//		else
//		{
//			s.find(title)->second++;
//		}
//	}
//
//	for (it = s.begin();it != s.end();it++)
//	{
//		if (max < it->second)
//		{
//			max = it->second;
//			result = it->first;
//		}
//	}
//
//	cout << result << "\n";
//
//	return 0;
//}
//
///*
//
//김형택은 탑문고의 직원이다. 김형택은 계산대에서 계산을 하는 직원이다. 김형택은 그날 근무가 끝난 후에, 오늘 판매한 책의 제목을 보면서 가장 많이 팔린 책의 제목을 칠판에 써놓는 일도 같이 하고 있다.
//오늘 하루 동안 팔린 책의 제목이 입력으로 들어왔을 때, 가장 많이 팔린 책의 제목을 출력하는 프로그램을 작성하시오.
//
//첫째 줄에 오늘 하루 동안 팔린 책의 개수 N이 주어진다. 이 값은 1,000보다 작거나 같은 자연수이다. 둘째부터 N개의 줄에 책의 제목이 입력으로 들어온다. 책의 제목의 길이는 50보다 작거나 같고, 알파벳 소문자로만 이루어져 있다.
//
//https://www.acmicpc.net/problem/1302
//
//*/