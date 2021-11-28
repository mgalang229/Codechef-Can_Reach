#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int x, y, k;
		cin >> x >> y >> k;
		// x and y coordinates must be divisible by k
		cout << (x % k == 0 && y % k == 0 ? "YES" : "NO") << '\n';
	}
	return 0;
}
