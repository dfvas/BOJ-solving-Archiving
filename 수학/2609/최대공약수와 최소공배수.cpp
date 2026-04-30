#include <iostream>
using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;

	int a = (x < y) ? x : y;
		
	int tmp = 0;
	for (int i = 1; i <= a; i++)
	{
		if (x % i == 0 && y % i == 0) {
			tmp = i;
		}
	}
	cout << tmp << '\n';
	
	a = (x > y) ? x : y;
	tmp = 0;
	for (int i = a; ; i++) {
		if (i % x == 0 && i % y == 0) {
			tmp = i;
			break;
		}
	}
	cout << tmp << '\n';

	return 0;
}
