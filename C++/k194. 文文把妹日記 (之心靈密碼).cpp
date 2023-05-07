#include <bits/stdc++.h>
using namespace std;
int main() {
    string n;
    while (cin >> n) {
        int ans = 0;
        for (int x = n.size()-1; x >= 0; --x) {
            if (n[x] == '1') {
                ans += static_cast<int> (pow(2, n.size() - x - 1));
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
