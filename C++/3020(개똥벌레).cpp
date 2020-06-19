//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//
//	int N, H;
//	int ans = 888888888;
//	int num,index;
//	cin >> N >> H;
//
//	vector<int> s1;
//	vector<int> s2;
//
//	for (int i = 0;i < N;i++)
//	{
//		cin >> num;
//
//		if (i % 2 == 1)
//			s1.push_back(num);		//Ȧ��
//		else 
//			s2.push_back(num);		//¦��
//	}
//
//	sort(s1.begin(), s1.end());
//	sort(s2.begin(), s2.end());
//
//	for (int i = 1;i <=H;i++)
//	{
//		int sum = 0;
//
//		sum += s1.size() - (lower_bound(s1.begin(), s1.end(), i) - s1.begin());			//iterator ������ (��ü-iũ��)
//		sum += s2.size() - (lower_bound(s2.begin(), s2.end(), H-i+1) - s2.begin());		//iterator ������ (��ü-(H-i+1)ũ��)
//
//		if (sum < ans)
//		{
//			ans = sum;
//			index = 1;
//		}
//		else if (sum == ans)
//		{
//			index++;
//		}
//	}
//
//	cout << ans << " "<<index<<"\n";
//
//	return 0;
//}
//
///*
//
//https://jaimemin.tistory.com/1109
//
//ó������ multiset���� ������ �� count �Լ��� ����ؼ� ����ߴµ� �ð� �ʰ��� ����
//lower_bound�� ����ؾ߰ڴٰ� ����.
//multiset���δ� lower_bound ũ�� ����� ������� vector�� Ǯ��
//
//*/