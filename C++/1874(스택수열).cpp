#include <iostream>
#include <stack>

using namespace std;

int main()
{
	int N;
	int count = 0;
	cin >> N;

	stack<int> base;
	stack<int> answer;
	stack<int> result;

	for (int i = 0;i < N;i++)
	{
		int num;
		cin >> num;
		answer.push(num);
		base.push(i+1);
	}

	while (base.empty() != 1)
	{
		if(answer[count]!=result[count])
	}


	return 0;
}