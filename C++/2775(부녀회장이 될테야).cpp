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
//ù ��° �ٿ� Test case�� �� T�� �־�����. �׸��� ������ ���̽����� �Է����� ù ��° �ٿ� ���� k, �� ��° �ٿ� ���� n�� �־�����. (1 <= k <= 14, 1 <= n <= 14)
//
//*/