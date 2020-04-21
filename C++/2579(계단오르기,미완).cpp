//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	int N;
//	int result=0;
//	bool prev = false;
//	cin >> N;
//
//	vector<int> stair(N);
//
//	for (int i = 0;i < N;i++)
//	{
//		cin >> stair[i];
//	}
//
//	result += stair[N - 1];
//
//	int i = N - 1;
//
//	while(i>1)
//	{
//		if (prev == true)
//		{
//			result += stair[i - 2];
//			i -= 2;
//			prev = false;
//		}
//		else
//		{
//			if (stair[i - 2] < stair[i - 1])
//			{
//				result += stair[i - 1];
//				i--;
//				prev = true;
//			}
//			else
//			{
//				result += stair[i - 2];
//				i -= 2;
//			}
//		}
//	}
//
//	if (i == 1 && (prev ==false||N==2))
//	{
//		result += stair[0];
//	}
//
//	cout << result;
//
//	return 0;
//}