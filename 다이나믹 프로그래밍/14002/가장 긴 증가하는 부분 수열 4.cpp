#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N, A[1001], len;
int index, tmp;
int dp[1001];
vector<int> v;

int main()
{
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		cin >> A[i];
		len = 0;

		for (int j = 1; j < i; j++)
		{
			if (A[j] < A[i])
				len = max(dp[j], len);
		}
		dp[i] = len + 1;
		
		if (tmp < len + 1)
		{
			tmp = len + 1; 
			index = i; 
		}
	}

	for (int i = index; i >= 1; i--)
	{
		if (dp[i] == tmp)
		{
			v.push_back(A[i]);
			tmp--;
		}
	}

	int size = v.size();
	cout << size << '\n'; 
	for (int i = 0; i < size; i++)
	{
		cout << v.back() << " ";
		v.pop_back();
	}
}
