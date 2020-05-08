//#include <iostream>
//#include <vector>
//#include <algorithm>			// min 사용
//
//using namespace std;
//
//int N;
//int index = 0;					// 중복해서 같은수를 참조하는 경우 방지
//vector<int> dp(1001,1000*1000+1);
//
//struct RGB
//{
//	int R, G, B;
//};
//
//int min_RGB(RGB v1, RGB v2)
//{
//	int mR = v1.R + min(v2.G, v2.B);
//	int mG = v1.G + min(v2.R, v2.B);
//	int mB = v1.B + min(v2.R, v2.G);
//	
//	if (index == 1)				// 2번째 전에 R을 골랐을 경우 mR을 제외
//		mR = 1000 * 1000+1;
//	else if (index == 2)
//		mG = 1000 * 1000+1;
//	else if (index == 3)
//		mB = 1000 * 1000+1;
//
//	int result = min({ mR,mG,mB });
//
//	if (mR == mG || mR == mB || mG == mB)
//		index = 0;
//	else if (result == mR)
//	{
//		index = 1;
//	}
//	else if (result == mG)
//	{
//		index = 2;
//	}
//	else if (result == mB)
//	{
//		index = 3;
//	}
//	return result;
//}
//
//int min_value(vector<RGB> v)
//{
//	dp.resize(N + 1);
//	
//	dp[0] = 0;
//	dp[1] = min({ v[1].R,v[1].G,v[1].B });
//
//	if(N>1)
//	{
//		for (int i = 2; i <= N; i++)
//		{
//			dp[i] = dp[i - 2] + min_RGB(v[i - 1], v[i]);
//		}
//	}
//
//	return dp[N];
//}
//
//int main()
//{
//	int r, g, b;
//	cin >> N;
//
//	vector<RGB> v(N+1);
//
//	for (int i = 1; i <= N; i++)
//	{
//		cin >> r >> g >> b;
//
//		v[i].R = r;
//		v[i].G = g;
//		v[i].B = b;
//	}
//
//	cout << min_value(v) << "\n";
//
//	return 0;
//}

// 2차원 동적계획법 공부하고 다시풀기