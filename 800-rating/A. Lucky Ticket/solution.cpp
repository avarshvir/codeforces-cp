#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    string s;
    cin >> s;
 
    for (int i = 0; i < n; i++) {
        if (s[i] != '4' && s[i] != '7') {
            cout << "NO";
            return 0;
        }
    }
 
    int sum1 = 0, sum2 = 0;
    int half = n / 2;
 
    for (int i = 0; i < half; i++) {
        sum1 += s[i] - '0'; 
    }
 
    for (int i = half; i < n; i++) {
        sum2 += s[i] - '0';
    }
 
    if (sum1 == sum2)
        cout << "YES";
    else
        cout << "NO";
 
    return 0;
}