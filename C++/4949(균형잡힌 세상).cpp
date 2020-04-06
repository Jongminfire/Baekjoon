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
//�ϳ� �Ǵ� �����ٿ� ���ļ� ���ڿ��� �־�����. �� ���ڿ��� ���� ���ĺ�, ����, �Ұ�ȣ("( )") ���ȣ("[ ]")������ �̷���� ������, ���̴� 100���ں��� �۰ų� ����.
//�Է��� ������������ �� �������� �� �ϳ�(".")�� ���´�.
//
//*/