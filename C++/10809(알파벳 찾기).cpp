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
//���ĺ� �ҹ��ڷθ� �̷���� �ܾ� S�� �־�����. ������ ���ĺ��� ���ؼ�, �ܾ ���ԵǾ� �ִ� ��쿡�� ó�� �����ϴ� ��ġ��, ���ԵǾ� ���� ���� ��쿡�� -1�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//https://www.acmicpc.net/problem/10809
//
//*/