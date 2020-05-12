//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int bnh(int k, int n)
//{
//	int answer = 0;
//
//	vector<vector<int>> v(15, vector<int>(15));
//
//	for (int i = 0;i < 15;i++)
//	{
//		for (int j = 0; j < 15; j++)
//		{
//			if (j == 0)
//				v[i][j] == 1;
//			
//			else if (i == 0)
//				v[i][j] = j + v[i][j - 1];
//			else
//				v[i][j] = v[i - 1][j] + v[i][j - 1];
//		}
//	}
//
//	answer = v[k-1][n];
//
//
//	return answer;
//}
//
//int main()
//{
//	int T;
//	int k, n;
//	cin >> T;
//
//	for (int i = 0; i < T; i++)
//	{
//		cin >> k >> n;
//		cout << bnh(k, n) << "\n";
//	}
//
//	return 0;
//}
//
///*
//
//첫 번째 줄에 Test case의 수 T가 주어진다. 그리고 각각의 케이스마다 입력으로 첫 번째 줄에 정수 k, 두 번째 줄에 정수 n이 주어진다. (1 <= k <= 14, 1 <= n <= 14)
//
//*/