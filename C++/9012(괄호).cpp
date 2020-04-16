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
//			vps.push(1);
//		else if (s[i] == ')')
//		{
//			if (vps.empty() == 1)
//			{
//				cout << "NO\n";
//				return;
//			}
//			vps.pop();
//		}
//	}
//
//	if (vps.empty() == 1)
//		cout << "YES\n";
//	else if(vps.empty()==0)
//		cout << "NO\n";
//}
//
//int main()
//{
//	int N;
//	cin >> N;
//
//	for (int i = 0;i < N;i++)
//	{
//		string s;
//		cin >> s;
//
//		VPS(s);
//	}
//
//	return 0;
//}
//
///*
//
//입력 데이터는 표준 입력을 사용한다. 입력은 T개의 테스트 데이터로 주어진다. 입력의 첫 번째 줄에는 입력 데이터의 수를 나타내는 정수 T가 주어진다. 각 테스트 데이터의 첫째 줄에는 괄호 문자열이 한 줄에 주어진다. 하나의 괄호 문자열의 길이는 2 이상 50 이하이다.
//
//*/