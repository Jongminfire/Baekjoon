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
//	for (int i = 0; i < d.size(); i++)
//	{
//		for (int j = 0; j < b.size(); j++)
//		{
//			if (d[i] == b[j])
//			{
//				ans.push_back(d[i]);
//				break;
//			}
//		}
//	}
//
//	sort(ans.begin(), ans.end());				// 정렬다시
//	
//	for (int i = 0; i < ans.size(); i++)
//		cout << ans[i] << "\n";
//
//	return 0;
//}