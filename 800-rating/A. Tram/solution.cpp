#include<iostream>
#include <algorithm>
using namespace std;

int main(){
    int n; 
    cin >> n;

    int current = 0;
    int max_capacity = 0;
    
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        
        current -= a;
        current += b;
        max_capacity = max(max_capacity, current);
    }
    
    cout << max_capacity;
    
    return 0;
}