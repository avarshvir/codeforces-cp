#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int max_height = 0, min_height = 101;
    int max_index = 0, min_index = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] > max_height) {
            max_height = a[i];
            max_index = i;
        }
        if (a[i] <= min_height) {
            min_height = a[i];
            min_index = i;
        }
    }

    int swaps_max = max_index;
    int swaps_min = n - 1 - min_index;

    if (max_index > min_index) {
        swaps_min--;
    }

    cout << swaps_max + swaps_min << endl;

    return 0;
}