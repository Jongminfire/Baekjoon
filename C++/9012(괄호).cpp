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
//�Է� �����ʹ� ǥ�� �Է��� ����Ѵ�. �Է��� T���� �׽�Ʈ �����ͷ� �־�����. �Է��� ù ��° �ٿ��� �Է� �������� ���� ��Ÿ���� ���� T�� �־�����. �� �׽�Ʈ �������� ù° �ٿ��� ��ȣ ���ڿ��� �� �ٿ� �־�����. �ϳ��� ��ȣ ���ڿ��� ���̴� 2 �̻� 50 �����̴�.
//
//*/