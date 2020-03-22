#include <iostream>

using namespace std;

int main()
{
	int A, B;
	cin >> A >> B;

	if (A > 0)
	{
		if (B > 0)
			cout << "1";
		else if (B < 0)
			cout << "4";
	}

	else if (A < 0)
	{
		if (B > 0)
			cout << "2";
		else if (B < 0)
			cout << "3";
	}

	return 0;
}

/*

https://www.acmicpc.net/problem/14681

*/