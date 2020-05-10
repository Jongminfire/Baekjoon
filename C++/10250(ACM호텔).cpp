//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int ACM(int h, int w, int n)
//{
//	int index = 0;
//	int answer = 0;
//
//	for (int i = 0;i < w;i++)
//	{
//		for (int j = 0; j < h; j++)
//		{
//			index++;
//			if (index == n)
//			{
//				answer = (j+1) * 100 + (i+1);
//				break;
//			}
//		}
//
//		if (index == n)
//			break;
//	}
//
//	return answer;
//}
//
//int main()
//{
//	int T;
//	int h, w, n;
//	cin >> T;
//
//	for (int i = 0;i < T;i++)
//	{
//		cin >> h >> w >> n;
//		cout << ACM(h, w, n) << "\n";
//	}
//
//	return 0;
//}
//
///*
//
//프로그램은 표준 입력에서 입력 데이터를 받는다. 프로그램의 입력은 T 개의 테스트 데이터로 이루어져 있는데 T 는 입력의 맨 첫 줄에 주어진다. 각 테스트 데이터는 한 행으로서 H, W, N, 세 정수를 포함하고 있으며 각각 호텔의 층 수, 각 층의 방 수, 몇 번째 손님인지를 나타낸다(1 ≤ H, W ≤ 99, 1 ≤ N ≤ H × W).
//https://www.acmicpc.net/problem/10250
//
//*/