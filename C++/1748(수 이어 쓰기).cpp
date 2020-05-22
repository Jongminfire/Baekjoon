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
//1부터 N까지의 수를 이어서 쓰면 다음과 같이 새로운 하나의 수를 얻을 수 있다.
//
//1234567891011121314151617181920212223...
//
//이렇게 만들어진 새로운 수는 몇 자리 수일까? 이 수의 자릿수를 구하는 프로그램을 작성하시오.
//
//https://www.acmicpc.net/problem/1748
//
//*/