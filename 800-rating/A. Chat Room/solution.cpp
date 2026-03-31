#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    string target = "hello";
    int j = 0; 

    for (char c : s) {
        if (c == target[j]) {
            j++;
        }
        if (j == target.size()) break; // all letters found
    }

    if (j == target.size()) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}