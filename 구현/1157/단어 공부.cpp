#include <iostream>
#include <algorithm>
using namespace std;
int main() {

	int cnt[26] = { 0, };
	int max = -1; 
	char res; 
	string s;

	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] >= 'a' && s[i] <= 'z') s[i] = s[i] - 'a' + 'A'; 
		if (++cnt[s[i] - 'A'] > max) { 
			max = cnt[s[i] - 'A'];
			res = s[i];
		}
	}
	int check = 0; 

	for (int i = 0; i < 26; i++) {
		if (max == cnt[i]) check++;
	}

	if (check == 1) cout << res;
	else cout << "?";

	return 0;
}
