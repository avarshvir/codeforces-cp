#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    string s;
    cin >> s;

    int current = 0; 
    int total_rotations = 0;

    for (int i = 0; i < s.length(); i++) {
        int next = s[i] - 'a'; 
        int clockwise = abs(next - current);
        int counterclockwise = 26 - clockwise;
        int move = min(clockwise, counterclockwise);
        total_rotations += move;
        current = next; 
    }

    cout << total_rotations << endl;
}