#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    string vowels = "aoyeui";
    string result = "";

    for (char c : s) {
        c = tolower(c);

        if (vowels.find(c) == string::npos) {
            result += '.';
            result += c;
        }
    }

    cout << result << endl;

    return 0;
}