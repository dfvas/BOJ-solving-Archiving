#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;
	
	vector<int> snows;
	for (int i = 0; i < n; ++i) {
		int input;
		cin >> input;

		if (input > 1440) {
			cout << -1;
			return 0;
		}
		snows.push_back(input);
	}

	sort(snows.begin(), snows.end());

	int time = 0;
	while (!snows.empty()) {

		int maxSnow = snows.back();
		time += snows.back();
		snows.pop_back();

		if (time > 1440) {
			cout << -1;
			return 0;
		}

		while (!snows.empty()) {
			int snow = snows.back();
			snows.pop_back();
			if (snow <= maxSnow) {
				maxSnow -= snow;
				if (maxSnow == 0) break;
			}
			else {
				snows.push_back(snow - maxSnow);
				sort(snows.begin(), snows.end());
				break;
			}
		}
	}
	cout << time;
	return 0;
}
