//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int point[2][3];
//	int result[2];
//
//	for (int i = 0;i < 3;i++)
//	{
//		cin >> point[0][i] >> point[1][i];
//	}
//
//	if (point[0][0] == point[0][1])
//	{
//		result[0] = point[0][2];
//
//		if (point[1][2] == point[1][0])
//			result[1] = point[1][1];
//		else
//			result[1] = point[1][0];
//
//	}
//	else if (point[0][0] == point[0][2])
//	{
//		result[0] = point[0][1];
//
//		if (point[1][1] == point[1][2])
//			result[1] = point[1][0];
//		else
//			result[1] = point[1][2];
//
//	}
//	else
//	{
//		result[0] = point[0][0];
//
//		if (point[1][0] == point[1][1])
//			result[1] = point[1][2];
//		else
//			result[1] = point[1][1];
//	}
//
//	cout << result[0] <<" "<<result[1];
//
//	return 0;
//}
//
///*
//
//세 점이 주어졌을 때, 축에 평행한 직사각형을 만들기 위해서 필요한 네 번째 점을 찾는 프로그램을 작성하시오.
//
//https://www.acmicpc.net/problem/3009
//
//*/