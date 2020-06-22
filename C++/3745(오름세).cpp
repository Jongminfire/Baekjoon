//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int n;
//	int end = 0;
//
//	while (cin>>n)				//EOF, scanf("%d",&n)>0 으로 했을 때는 케이스의 마지막 수를	입력받고 개행 문자가 남아있어서 EOF처리를 못해준다고함.
//	{
//		vector<int> v(n);
//		vector<int> LIS;
//
//		for (int i = 0;i < n;i++)
//		{
//			cin >> v[i];
//		}
//
//		for (int i = 0;i < n;i++)
//		{
//			int find = v[i];
//			auto it = lower_bound(LIS.begin(), LIS.end(), find);
//
//			if (it == LIS.end())
//				LIS.push_back(find);
//			else
//				*it = find;
//		}
//
//		cout << LIS.size() << "\n";
//	}
//
//	return 0;
//}
//
///*
//
//LIS문제
//
//Testcase를 수 입력 받지 않고 EOF(End of File)로 구현해야 했음.
//scanf("%d",&n)>0 으로 했을 때는 케이스의 마지막 수를	입력받고 개행 문자가 남아있어서 EOF처리를 못해준다고함.
//
//질문에서 cin>>n을 활용해서 해결 할 수 있다고 한것을 참고함 (https://www.acmicpc.net/board/view/45412)
//
//https://www.acmicpc.net/problem/3745
//
//*/