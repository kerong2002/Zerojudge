#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string n;
    while (cin >> n) {
        cout << n[0];
        for (int x = 0; x < 4 - n.size(); ++x){
            cout << "0";
        }
        for (int x = 1; x < n.size(); ++x) {
            cout << n[x];
        }
        cout << "\n";
    }
    return 0;
}
