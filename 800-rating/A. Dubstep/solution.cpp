#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    string result = "";

    for (int i = 0; i < s.size(); ) {
        if (i + 2 < s.size() && s.substr(i, 3) == "WUB") {
            if (!result.empty() && result.back() != ' ') {
                result += ' ';
            }
            i += 3;
        } else {
            result += s[i];
            i++;
        }
    }

    if (!result.empty() && result.back() == ' ') {
        result.pop_back();
    }

    cout << result << endl;

    return 0;
}