#include <iostream>
using namespace std; 
long long int gcd(long long a,long long b) {
	if (b == 0)
		return a;
	else
		return gcd(b, a % b);
}
int main() {
	long long result = gcd(3,6);
	long long a, b;
	cin >> a >> b; 
	long long answer = gcd(a, b);
	for (int i = 0; i < answer; i++) {
			cout << 1; 
	}
	return 0;

}
