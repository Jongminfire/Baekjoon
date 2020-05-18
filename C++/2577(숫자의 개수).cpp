//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	int A, B, C;
//	cin >> A >> B >> C;
//
//	string s = to_string(A*B*C);
//	vector<int> v(10);
//
//	for (int i = 0;i < s.size();i++)
//	{
//		int idx = s[i] - '0';
//		v[idx]++;
//	}
//
//	for (int i = 0;i < v.size();i++)
//	{
//		cout << v[i] << "\n";
//	}
//
//	return 0;
//}
//
///*
//
//세 개의 자연수 A, B, C가 주어질 때 A×B×C를 계산한 결과에 0부터 9까지 각각의 숫자가 몇 번씩 쓰였는지를 구하는 프로그램을 작성하시오.
//
//예를 들어 A = 150, B = 266, C = 427 이라면
//
//A × B × C = 150 × 266 × 427 = 17037300 이 되고,
//
//계산한 결과 17037300 에는 0이 3번, 1이 1번, 3이 2번, 7이 2번 쓰였다.
//
//https://www.acmicpc.net/problem/2577
//
//*/