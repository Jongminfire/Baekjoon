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
//	vector<int> v(s.size());
//	
//	int now=0;
//	int count = 1;
//	int result = 0;
//	bool sub = false;
//
//	for (int i = 0;i < s.size();i++)
//	{
//		if (s[i] == '+')
//		{
//			if (sub == true)
//			{
//				result -= now;
//				now = 0;
//				count = 1;
//			}
//			else
//			{
//				result += now;
//				now = 0;
//				count = 1;
//			}
//		}
//		else if (s[i] == '-')
//		{
//			if (sub == true)
//			{
//				result -= now;
//				now = 0;
//				count = 1;
//			}
//			else
//			{
//				result += now;
//				now = 0;
//				count = 1;
//			}
//
//			sub = true;
//		}
//		else
//		{
//			if(count!=1)
//				now *= 10;
//
//			now += (int)s[i]-48;		// string���� �����Ƿ� ������ȯ �� �ƽ�Ű -48
//			count++;
//		}
//	}
//
//	if (sub == true)
//		result -= now;
//	else
//		result += now;
//
//	cout << result << "\n";
//
//	return 0;
//}
//
///*
//
//ù° �ٿ� ���� �־�����. ���� ��0��~��9��, ��+��, �׸��� ��-�������� �̷���� �ְ�, ���� ó���� ������ ���ڴ� �����̴�. �׸��� �����ؼ� �� �� �̻��� �����ڰ� ��Ÿ���� �ʰ�, 5�ڸ����� ���� ���ӵǴ� ���ڴ� ����. ���� 0���� ������ �� �ִ�.
//
//https://www.acmicpc.net/problem/1541
//
//*/