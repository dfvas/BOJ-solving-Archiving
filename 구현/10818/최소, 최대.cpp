#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int array[1000001];
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> array[i];
	}

	sort(array, array + n);

	cout << array[0] << " " << array[n - 1];

	return 0;
}
