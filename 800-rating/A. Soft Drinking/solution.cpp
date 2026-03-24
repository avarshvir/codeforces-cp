#include <iostream>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int total_drink = k * l;
    int toasts_drink = total_drink / nl;

    int total_slices = c * d;
    int toasts_lime = total_slices;

    int toasts_salt = p / np;

    int total_toasts = min(toasts_drink, min(toasts_lime, toasts_salt));

    cout << total_toasts / n << endl;

    return 0;
}