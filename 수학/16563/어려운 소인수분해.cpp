#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;
int main()
{
	int N;
	cin >> N;
	vector<int>input(N);
	for (int i = 0; i < N; i++)
		cin >> input[i];
	int max = *max_element(input.begin(), input.end());

	vector<int>check(max + 1);
	for (int i = 2; i <= max; i++)
		check[i] = i;

	for (int i = 2; i * i <= max; i++)
	{
		if (check[i]==i)
		{
			for (int j = 2 * i; j <= max; j += i)
			{
				if (check[j]==j)
					check[j] = i;
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		int num = input[i];
		while (num!=1)
		{
			cout << check[num] << " ";
			num /= check[num];
		}
		cout << "\n";
	}

}
