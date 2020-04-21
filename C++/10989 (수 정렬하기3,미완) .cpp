//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	int N;
//	int max = 0;
//	cin >> N;
//
//	vector<int> v(N);
//	vector<int> c(N);
//
//	for (int i = 0;i < N;i++)
//	{
//		
//		int num;
//		cin >> num;
//
//		if (max < num)
//			max = num;
//
//		c.resize(num);
//		c[num]++;
//	}
//
//	for (int i = 1; i < c.size(); i++)
//	{
//		c[i] += c[i - 1];
//
//		if (c[i] == N)
//			break;
//	}
//
//	for (int i = 1; i < c.size(); i++)
//	{
//		int count;
//
//		count = c[i] - c[i - 1];
//
//		while (count != 0)
//		{
//			v.push_back(i);
//			count--;
//		}
//
//		if (c[i] == N)
//			break;
//	}
//
//	for (int i = N;i < v.size();i++)
//	{
//		cout << v[i] << "\n";
//	}
//
//	return 0;
//}