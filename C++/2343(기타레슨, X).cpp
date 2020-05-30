//#include <iostream>
//#include <vector>
//#include <string>
//#include <map>
//
//using namespace std;
//
//int main()
//{
//	int num;
//	int sum;
//	int result=99999;
//	int N, M;
//	cin >> N >> M;
//
//	vector<int> blue(N);
//	vector<int> idx(M+1);
//
//	for (int i = 0 ; i <N ; i++)
//	{
//		cin >> blue[i];
//	}
//
//	for (int i = 1; i <=M;i++)
//	{
//		idx.push_back(i);
//	}
//
//	idx[0] = 0;
//	idx[M] = M;
//
//	while (1)
//	{
//		int max = 0;
//
//		for (int i = 0;i <M;i++)
//		{
//			sum = 0;
//
//			for (int j = idx[i];j < idx[i + 1];j++)
//			{
//				sum += blue[j];
//			}
//
//			if (max < sum)
//				max = sum;
//		}
//
//		for (int i = idx[M - 1];i < idx[M];i++)
//		{
//			sum += blue[i];
//		}
//
//		if (max < sum)
//			max = sum;
//
//		if (result > max)
//			result = max;
//	}
//
//
//
//
//	return 0;
//}