//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	string s;
//	getline(cin, s);	//getline���� �޾ƾ� ������� ����
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
//ù �ٿ� ���� ��ҹ��ڿ� ����� �̷���� ���ڿ��� �־�����. �� ���ڿ��� ���̴� 1,000,000�� ���� �ʴ´�. �ܾ�� ���� �� ���� ���еǸ�, ������ �����ؼ� ������ ���� ����. ���� ���ڿ��� �հ� �ڿ��� ������ ���� ���� �ִ�.
//
//*/