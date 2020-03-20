//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	int N;
//
//	cin >> N;
//
//	vector<int> v;
//
//	for (int i = 0;i < N;i++)
//	{
//		int num;
//		cin >> num;
//		v.push_back(num);
//	}
//
//	sort(v.begin(), v.end());
//
//	for (int i = 0; i < v.size();i++)
//	{
//		cout << v[i]<<"\n";
//	}
//
//	return 0;
//}
//
///*
//
//<문제>
//N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.
//시간 복잡도가 O(nlogn)인 정렬 알고리즘으로 풀 수 있습니다. 예를 들면 병합 정렬, 힙 정렬 등이 있지만, 어려운 알고리즘이므로 지금은 언어에 내장된 정렬 함수를 쓰는 것을 추천드립니다.
//
//<답>
// algorithm 헤더에 포함된 sort() 함수로 해결
//
//*/