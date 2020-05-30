//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	int D, N;
//	cin >> D >> N;
//
//	int num;
//
//	vector<int> v(D);
//	vector<int> pizza(N);
//
//	for (int i = 0;i < D;i++)
//	{
//		cin >> num;
//		v[i] = num;
//	}
//
//	for (int i = 0;i < N;i++)
//	{
//		cin >> num;
//		pizza[i] = num;
//	}
//
//	if (N == 0)
//	{
//		cout << D << "\n";
//		return 0;
//	}
//
//	for (int i = 0;i < N;i++)
//	{
//		int dow = pizza[i];
//		int index = 0;
//		int size = v.size();
//		
//		if (v.empty() || dow>v[0] || N==0)
//		{
//			cout << "0\n";
//			return 0;
//		}
//
//		if (i == 0)
//		{
//			while (v[index] >= dow )
//			{
//				index++;
//				if (index == v.size())
//					break;
//			}
//
//			for (int j = index; j <= size; j++)
//			{
//				if (!v.empty())
//				{
//					v.pop_back();
//				}
//			}
//		}
//
//		else
//		{
//			while (v[v.size() - 1 - index] < dow)
//			{
//				index++;
//				if (index == v.size() - 1)
//					break;
//			}
//
//			for (int j = 0; j <= index;j++)
//			{
//				v.pop_back();
//			}
//		}
//	}
//
//	cout << v.size() + 1 << "\n";
//
//	return 0;
//}