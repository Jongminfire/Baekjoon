//#include <string>
//#include <iostream>
//#include <math.h>
//
//using namespace std;
//
//int answer(string idx)
//{
//	int result=0;
//
//	for (int i = 1;i < idx.size();i++)
//	{
//		result += pow(10, i - 1) * 9 * i;
//	}
//
//	return result;
//}
//
//int main()
//{
//	int N;
//	cin >> N;
//
//	int ans=0;
//
//	string idx = to_string(N);
//
//	ans += (N-(pow(10,idx.size()-1)-1))*(idx.size());
//	ans += answer(idx);
//
//	cout << ans << "\n";
//
//	return 0;
//}
//
///*
//
//1���� N������ ���� �̾ ���� ������ ���� ���ο� �ϳ��� ���� ���� �� �ִ�.
//
//1234567891011121314151617181920212223...
//
//�̷��� ������� ���ο� ���� �� �ڸ� ���ϱ�? �� ���� �ڸ����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//https://www.acmicpc.net/problem/1748
//
//*/