#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> coins(n);
    for(int i = 0; i < n; i++){
        cin >> coins[i];
    }

    int total = 0;
    for(int i = 0; i < n; i++){
        total += coins[i];
    }

    sort(coins.begin(), coins.end(), greater<int>());

    int mySum = 0;
    int count = 0;
    for(int i = 0; i < n; i++){
        mySum += coins[i];
        count++;
        if(mySum > total / 2){
            break;
        }
    }

    cout << count << endl;
}