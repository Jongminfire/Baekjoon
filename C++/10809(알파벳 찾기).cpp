//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	string s;
//	cin >> s;
//
//	vector<int> v(26,-1);
//
//	for (int i = 0;i < s.size();i++)
//	{
//		int index = (int)s[i] - (int)'a';
//		
//		if(v[index]== -1)
//			v[index]=i;
//	}
//
//	for (int i = 0;i < v.size();i++)
//	{
//		cout << v[i] << " ";
//	}
//
//	cout << "\n";
//
//	return 0;
//}
//
///*
//
//알파벳 소문자로만 이루어진 단어 S가 주어진다. 각각의 알파벳에 대해서, 단어에 포함되어 있는 경우에는 처음 등장하는 위치를, 포함되어 있지 않은 경우에는 -1을 출력하는 프로그램을 작성하시오.
//
//https://www.acmicpc.net/problem/10809
//
//*/