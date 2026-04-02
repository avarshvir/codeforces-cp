#include <iostream>
using namespace std;

int main() {
    char dir;
    string s;
    
    cin >> dir >> s;
    
    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    
    for (char c : s) {
        int index = keyboard.find(c);
        
        if (dir == 'R') {
            cout << keyboard[index - 1];
        } else { 
            cout << keyboard[index + 1];
        }
    }
    
    return 0;
}