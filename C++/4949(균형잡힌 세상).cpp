//#include <iostream>
//#include <stack>
//#include <string>
//
//using namespace std;
//
//void VPS(string s)
//{
//	stack<int> vps;
//
//	for (int i = 0;i < s.size();i++)
//	{
//		if (s[i] == '(')
//		{
//			vps.push(1);
//		}
//		else if (s[i] == '[')
//		{
//			vps.push(2);
//		}
//		else if (s[i] == ')')
//		{
//			if (vps.empty() == 1 || vps.top() == 2)
//			{
//				cout << "no\n";
//				return;
//			}
//			vps.pop();
//		}
//		else if (s[i] == ']')
//		{
//			if (vps.empty() == 1 || vps.top() == 1)
//			{
//				cout << "no\n";
//				return;
//			}
//			vps.pop();
//		}
//	}
//
//	if (vps.empty() == 1)
//		cout << "yes\n";
//	else if (vps.empty() == 0)
//		cout << "no\n";
//}
//
//int main()
//{
//	string s;
//
//	while (1)
//	{
//		getline(cin, s);
//
//		if (s == ".")
//			break;
//
//		VPS(s);
//	}
//
//	return 0;
//}
//
///*
//
//하나 또는 여러줄에 걸쳐서 문자열이 주어진다. 각 문자열은 영문 알파벳, 공백, 소괄호("( )") 대괄호("[ ]")등으로 이루어져 있으며, 길이는 100글자보다 작거나 같다.
//입력의 종료조건으로 맨 마지막에 점 하나(".")가 들어온다.
//
//*/