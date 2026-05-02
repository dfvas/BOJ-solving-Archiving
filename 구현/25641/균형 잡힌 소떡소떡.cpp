#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s; int slen; cin >> slen >> s;
	int scnt = 0, tcnt = 0;
	for (auto& l : s) (l == 's') ? scnt++ : tcnt++;
	int idx = 0;
	while (scnt != tcnt) {
		(s[idx] == 's') ? scnt-- : tcnt--;
		idx++;
	}

	cout << s.substr(idx, slen - idx);
}
