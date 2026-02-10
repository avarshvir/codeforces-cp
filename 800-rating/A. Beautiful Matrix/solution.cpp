#include <iostream>
using namespace std;

int main() {
    int row_of_one, col_of_one;
    int value;

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cin >> value;
            if (value == 1) {
                row_of_one = i;
                col_of_one = j;
            }
        }
    }

    int moves = abs(row_of_one - 3) + abs(col_of_one - 3);
    cout << moves;

    return 0;
}
