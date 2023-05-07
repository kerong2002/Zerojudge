#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string n;
    while (cin >> n) {
        int ans = 0;
        for (size_t x = 1; x < n.size(); x++) {
            if (n[x] == '8') {
                ans += 1;
            }
        }
        if(ans == 0){
            cout << n << " can get " << "0% off.\n";
        }
        else{
            cout << n << " can get " << ans << "0% off.\n";
        }

    }
    return 0;
}
