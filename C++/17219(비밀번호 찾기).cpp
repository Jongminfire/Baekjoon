//#include <iostream>
//#include <string>
//#include <map>
//
//using namespace std;
//
//int main()
//{
//	cin.tie(NULL);
//	ios::sync_with_stdio(false);
//
//	map<string, string> m;
//	map<string, string>::iterator it;
//
//	int N, M;
//	string name, password;
//	string site;
//	cin >> N >> M;
//
//	for (int i = 0;i < N;i++)
//	{
//		cin >> name >> password;
//		m.insert(make_pair(name, password));
//	}
//
//	for (int i = 0;i < M;i++)
//	{
//		cin >> site;
//		cout << m.find(site)->second << "\n";
//	}
//
//	return 0;
//}
//
///*
//
//ù° �ٿ� ����� ����Ʈ �ּ��� �� N(1 �� N �� 100,000)�� ��й�ȣ�� ã������ ����Ʈ �ּ��� �� M(1 �� M �� 100,000)�� �־�����.
//�ι�° �ٺ��� N���� �ٿ� ���� �� �ٿ� ����Ʈ �ּҿ� ��й�ȣ�� �������� ���еǾ� �־�����. ����Ʈ �ּҴ� ���ĺ� �ҹ���, ���ĺ� �빮��, ���('-'), ��ħǥ('.')�� �̷���� �ְ�, �ߺ����� �ʴ´�. ��й�ȣ�� ���ĺ� �빮�ڷθ� �̷���� �ִ�. ��� ���̴� �ִ� 20���̴�.
//N+2��° �ٺ��� M���� �ٿ� ���� ��й�ȣ�� ã������ ����Ʈ �ּҰ� ���ٿ� �ϳ��� �Էµȴ�. �̶�, �ݵ�� �̹� ����� ����Ʈ �ּҰ� �Էµȴ�.
//
//https://www.acmicpc.net/problem/17219
//
//Map ��빮��
//
//*/