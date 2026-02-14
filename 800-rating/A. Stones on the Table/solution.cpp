#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin >> n;

    string s;
    cin >> s;

    int count = 0;

    // RRGGBRG

    for(int i = 1; i < n; i++){
        if(s[i] == s[i - 1]){
            count = count + 1;
        }
    }

    cout << count;

    return 0;

}