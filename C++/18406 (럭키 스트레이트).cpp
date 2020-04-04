//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	string s;
//	int size;
//	int left = 0;
//	int right = 0;
//
//	cin >> s;
//	size = s.size();
//
//	vector<int> v(size);
//
//	for (int i = 0;i < size;i++)
//	{
//		v[i] = (int)s[i] - 48;		//	아스키값으로 받으므로 -48
//	}
//
//	for (int i = 0;i < size/2 ; i++)
//	{
//		left += v[i];
//		right += v[size - i-1];		// -1 안하면 범위초과
//	}
//
//	if (left == right)
//		cout << "LUCKY";
//	else
//		cout << "READY";
//
//	return 0;
//}
//
///*
//
//첫째 줄에 점수 N이 정수로 주어진다. (10 ≤ N ≤ 99,999,999) 단, 점수 N의 자릿수는 항상 짝수 형태로만 주어진다.
//https://www.acmicpc.net/problem/18406
//
//*/