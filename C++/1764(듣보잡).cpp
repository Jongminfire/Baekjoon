//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	int N, M;
//	cin >> N >> M;
//
//	vector<string> d(N);
//	vector<string> b(M);
//	vector<string> ans;
//
//	for (int i = 0;i < d.size();i++)
//		cin >> d[i];
//
//	for (int i = 0; i < b.size(); i++)
//		cin >> b[i];
//
//	sort(b.begin(), b.end());					// binary_search ����ϱ����� �������ֱ�!
//
//	for (int i = 0; i < d.size(); i++)
//	{
//		if (binary_search(b.begin(), b.end(), (string)d[i]) == true)		//binary_search(����,��,ã�´��) -> ����� ������ true , ������ false
//			ans.push_back(d[i]);
//	}
//
//	sort(ans.begin(), ans.end());				// ���Ĵٽ�
//	
//	cout << ans.size() << "\n";
//
//	for (int i = 0; i < ans.size(); i++)
//		cout << ans[i] << "\n";
//
//	return 0;
//}
//
///*
//
//�������� �赵 ���� ����� ��ܰ�, ���� ���� ����� ����� �־��� ��, �赵 ���� ���� ����� ����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//https://www.acmicpc.net/problem/1764
//
//(����Ž��)
//
//*/