//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <map>
//
//using namespace std;
//
//int main()
//{
//	int T, n;
//	string item, kind;
//
//	cin >> T;
//
//	for (int i = 0;i < T;i++)
//	{
//		multimap<string, string> m;
//		vector<string> kinds;
//		int result = 1;
//		cin >> n;
//
//		for (int j = 0; j < n;j++)
//		{
//			cin >> item >> kind;
//			m.insert(make_pair(kind, item));
//			
//			if(!binary_search(kinds.begin(),kinds.end(),kind))
//				kinds.push_back(kind);
//
//			sort(kinds.begin(), kinds.end());
//		}
//
//		for (int j = 0;j < kinds.size();j++)
//		{
//			result *= m.count(kinds[j]);
//		}
//
//		if (n == 0)
//			result = 0;
//		else if (kinds.size()==1)
//			result = n;
//		else
//			result += n;
//
//		cout << result << "\n";
//	}
//
//	return 0;
//}