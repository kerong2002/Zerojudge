#include <bits/stdc++.h>
using namespace std;

int main() {
	int n = 0;
	cin >> n;
	vector<int> dp(n, 1);
	for (int y = 0; y < n ; ++y) {
		for (int x = y - 1; x > 0 && y > 1; --x) {
            dp[x] = dp[x] + dp[x - 1];
		}
		for (int x = 0; x <= y; ++x) {
            cout << dp[x] << " ";
		}
		cout << endl;
	}

	return 0;
}
