//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	vector<int> v(30,0);
//	vector<int> ans;
//
//	for (int i = 0;i < v.size()-2;i++)
//	{
//		int num;
//		cin >> num;
//		v[num - 1]++;
//	}
//
//	for (int i = 0;i < v.size();i++)
//	{
//		if (v[i] == 0)
//			ans.push_back(i);
//	}
//
//	cout << ans[0] + 1 << "\n";
//	cout << ans[1] + 1 << "\n";
//
//	return 0;
//}
//
///*
//
//X���� M�������� ���α׷��� ������ �ð� �ֽ��ϴ�. ���ǿ� �л��� 30���� �ִµ�, �л� ��ο� �� �л����� 1������ 30������ �⼮��ȣ�� �پ� �ֽ��ϴ�.
//
//�������� ���� Ư�������� 28���� �����ߴµ�, �� �߿��� ���� �� �� �л� 2���� �⼮��ȣ�� ���ϴ� ���α׷��� �ۼ��ϼ���.
//
//https://www.acmicpc.net/problem/5597
//
//*/