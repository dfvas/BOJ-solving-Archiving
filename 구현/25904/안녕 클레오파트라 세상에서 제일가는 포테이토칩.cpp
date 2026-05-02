#include <iostream>
using namespace std;

int N, X;
int arr[100];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> X;
	for (int i = 0; i < N; i++) cin >> arr[i];
	
	int idx = 0;
	while (X <= arr[idx]) {
		X++, idx++;
		if (idx == N) idx = 0;
	}

	cout << idx + 1;
}
