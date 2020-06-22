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
//	while (cin>>n)				//EOF, scanf("%d",&n)>0 ���� ���� ���� ���̽��� ������ ����	�Է¹ް� ���� ���ڰ� �����־ EOFó���� �����شٰ���.
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
//LIS����
//
//Testcase�� �� �Է� ���� �ʰ� EOF(End of File)�� �����ؾ� ����.
//scanf("%d",&n)>0 ���� ���� ���� ���̽��� ������ ����	�Է¹ް� ���� ���ڰ� �����־ EOFó���� �����شٰ���.
//
//�������� cin>>n�� Ȱ���ؼ� �ذ� �� �� �ִٰ� �Ѱ��� ������ (https://www.acmicpc.net/board/view/45412)
//
//https://www.acmicpc.net/problem/3745
//
//*/