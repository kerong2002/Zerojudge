#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string input;
    while (getline(cin, input)) {

        stringstream ss(input);

        string word;

        int sum = 0;
        while (ss >> word) {
            bool isNumber = true;

            for (char c : word) {
                if (!isdigit(c)) {
                    isNumber = false;
                    break;
                }
            }

            if (isNumber) {
                sum += stoi(word);
            }

        }

        cout << sum << endl;
    }
    return 0;
}
