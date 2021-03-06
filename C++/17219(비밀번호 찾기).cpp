//#include <iostream>
//#include <string>
//#include <map>
//
//using namespace std;
//
//int main()
//{
//	cin.tie(NULL);
//	ios::sync_with_stdio(false);
//
//	map<string, string> m;
//	map<string, string>::iterator it;
//
//	int N, M;
//	string name, password;
//	string site;
//	cin >> N >> M;
//
//	for (int i = 0;i < N;i++)
//	{
//		cin >> name >> password;
//		m.insert(make_pair(name, password));
//	}
//
//	for (int i = 0;i < M;i++)
//	{
//		cin >> site;
//		cout << m.find(site)->second << "\n";
//	}
//
//	return 0;
//}
//
///*
//
//첫째 줄에 저장된 사이트 주소의 수 N(1 ≤ N ≤ 100,000)과 비밀번호를 찾으려는 사이트 주소의 수 M(1 ≤ M ≤ 100,000)이 주어진다.
//두번째 줄부터 N개의 줄에 걸쳐 각 줄에 사이트 주소와 비밀번호가 공백으로 구분되어 주어진다. 사이트 주소는 알파벳 소문자, 알파벳 대문자, 대시('-'), 마침표('.')로 이루어져 있고, 중복되지 않는다. 비밀번호는 알파벳 대문자로만 이루어져 있다. 모두 길이는 최대 20자이다.
//N+2번째 줄부터 M개의 줄에 걸쳐 비밀번호를 찾으려는 사이트 주소가 한줄에 하나씩 입력된다. 이때, 반드시 이미 저장된 사이트 주소가 입력된다.
//
//https://www.acmicpc.net/problem/17219
//
//Map 사용문제
//
//*/