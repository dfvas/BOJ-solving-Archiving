#include <iostream>
using namespace std;
typedef long long ll;

ll arr[100][3];
ll K, D, A;

void solve() {
	ll ans = 0;
	
	int M; cin >> M;
	for (int i = 0; i < M; i++) cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
	
	cin >> K >> D >> A;

	for (int i = 0; i < M; i++) ans += max(arr[i][0] * K - arr[i][1] * D + arr[i][2] * A, 0LL);

	cout << ans << '\n';
}

int main() {
	ios::sync_with_stdio(0);

	int N; cin >> N;
	while (N--) solve();
}
