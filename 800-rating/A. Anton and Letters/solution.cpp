#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    string line;
    getline(cin, line);

    set<char> s;

    for(char c : line) {
        if(c >= 'a' && c <= 'z') {
            s.insert(c);
        }
    }

    cout << s.size() << endl;
    return 0;
}