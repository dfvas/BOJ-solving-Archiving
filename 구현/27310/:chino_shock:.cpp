#include <iostream>
#include <string>
using namespace std;

string s;
int cnt;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> s;
	for (auto& l : s) {
		if (l == '_') cnt++;
	}

	cout << s.length() + 2 + cnt * 5;
}
