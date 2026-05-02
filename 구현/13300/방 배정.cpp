#include <bits/stdc++.h>
using namespace std;

int stu[2][6];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, k;
	cin >> n >> k;
	
	while (n--) {
		int s, y;
		cin >> s >> y;
		stu[s][y - 1]++;
	}
	
	int ans = 0;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 6; j++) {
			ans += stu[i][j] / k;
			
			if (stu[i][j] % k != 0) {
				ans++; 
			}
		}
	}
	
	cout << ans;
	
	return 0;
}
