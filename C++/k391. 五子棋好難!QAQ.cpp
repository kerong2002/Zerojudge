#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a;
    string b;
    int a_n = 0;
    int b_n = 0;
    while (cin >> a) {
        cin >> a_n;
        cin >> b;
        cin >> b_n;
        if (a_n > b_n) {
            cout << a << " WIN!\n";
        }
        else if (a_n < b_n) {
            cout << b << " WIN!\n";
        }
        else {
            cout << "tie\n";
        }
    }

    return 0;
}
