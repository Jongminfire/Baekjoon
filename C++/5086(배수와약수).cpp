//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	while (1)
//	{
//		int A, B;
//		cin >> A >> B;
//
//		if (A == 0 && B == 0) break;
//		else if (B%A == 0)
//			cout << "factor\n";
//		else if (A%B == 0)
//			cout << "multiple\n";
//		else
//			cout << "neither\n";
//	}
//
//	return 0;
//}
//
///*
//
//입력은 여러 테스트 케이스로 이루어져 있다. 각 테스트 케이스는 10,000이 넘지않는 두 자연수로 이루어져 있다. 마지막 줄에는 0이 2개 주어진다. 두 수가 같은 경우는 없다.
//각 테스트 케이스마다 첫 번째 숫자가 두 번째 숫자의 약수라면 factor를, 배수라면 multiple을, 둘 다 아니라면 neither를 출력한다.
//
//https://www.acmicpc.net/problem/5086
//
//*/