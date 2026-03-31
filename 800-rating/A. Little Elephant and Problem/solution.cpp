#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        v.push_back(k);
    }

    vector<int> sorted_v = v;   
    sort(sorted_v.begin(), sorted_v.end());   

    int diff_count = 0;
    for(int i = 0; i < n; i++){
        if(v[i] != sorted_v[i]){
            diff_count++;
        }
    }

    if(diff_count == 0 || diff_count == 2){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;

}