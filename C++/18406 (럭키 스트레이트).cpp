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
//		v[i] = (int)s[i] - 48;		//	�ƽ�Ű������ �����Ƿ� -48
//	}
//
//	for (int i = 0;i < size/2 ; i++)
//	{
//		left += v[i];
//		right += v[size - i-1];		// -1 ���ϸ� �����ʰ�
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
//ù° �ٿ� ���� N�� ������ �־�����. (10 �� N �� 99,999,999) ��, ���� N�� �ڸ����� �׻� ¦�� ���·θ� �־�����.
//https://www.acmicpc.net/problem/18406
//
//*/