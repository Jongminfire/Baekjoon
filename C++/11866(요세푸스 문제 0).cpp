//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	int N, K;
//	int index = 0;
//	cin >> N >> K;
//
//	vector<int> v(N);
//	vector<int> j;
//	
//	for (int i = 0;i < N;i++)
//	{
//		v[i] = i + 1;
//	}
//
//	for (int i = 0;i < N;i++)
//	{
//		index += (K-1);
//
//		while (index > v.size() - 1)
//			index = index - v.size();
//
//		j.push_back(v[index]);
//		v.erase(v.begin()+index);
//	}
//
//	cout << "<";
//
//	for (int i = 0;i < j.size();i++)
//	{
//		cout << j[i];
//
//		if (i != j.size()-1)
//			cout << ", ";
//	}
//
//	cout << ">\n";
//
//	return 0;
//}
//
///*
//
//�似Ǫ�� ������ ������ ����.
//
//1������ N������ N���� ����� ���� �̷�鼭 �ɾ��ְ�, ���� ���� K(�� N)�� �־�����. ���� ������� K��° ����� �����Ѵ�. �� ����� ���ŵǸ� ���� ������ �̷���� ���� ���� �� ������ ����� ������. �� ������ N���� ����� ��� ���ŵ� ������ ��ӵȴ�. ������ ������� ���ŵǴ� ������ (N, K)-�似Ǫ�� �����̶�� �Ѵ�. ���� ��� (7, 3)-�似Ǫ�� ������ <3, 6, 2, 7, 5, 1, 4>�̴�.
//
//N�� K�� �־����� (N, K)-�似Ǫ�� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//https://www.acmicpc.net/problem/11866
//
//*/