//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	string s;
//	getline(cin, s);	//getline으로 받아야 공백까지 받음
//
//	int count = 1;
//
//	for (int i = 0;i < s.size();i++)
//	{
//		if (s[i] == ' ')
//		{
//			count++;
//		}
//	}
//
//	if (s[0] == ' ')
//		count--;
//	if (s[s.size() - 1] == ' ')
//		count--;
//
//	cout << count << "\n";
//
//	return 0;
//}
//
///*
//
//첫 줄에 영어 대소문자와 띄어쓰기로 이루어진 문자열이 주어진다. 이 문자열의 길이는 1,000,000을 넘지 않는다. 단어는 띄어쓰기 한 개로 구분되며, 공백이 연속해서 나오는 경우는 없다. 또한 문자열의 앞과 뒤에는 공백이 있을 수도 있다.
//
//*/