#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;

	vector <int> n(M,1);

	for (int i = 0;i < M;i++)
		cout << n[i] << " ";
	cout << "\n";

	while (n[0]!=N)
	{	
		for (int i = M-1;i>=0;i--)
		{
				if (n[i] != N)
				{
					n[i]++;

					for (int j = i+1; j < M; j++)
					{
						n[j] -= (j - i);
					}

					break;
				}
		}

		for (int i = 0;i < M;i++)
			cout << n[i] <<" ";
		cout << "\n";
	}

	return 0;
}

//¹Ì¿Ï