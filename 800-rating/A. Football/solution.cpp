#include<iostream>
#include<string>
using namespace std;
int main(){
    string n;
    cin >> n;
    
    int count_zeros = 0; 
    int count_ones = 0;
    
    for(int i = 0; i < n.length(); i++){
        if(n[i] == '0'){
            count_zeros++;
            count_ones = 0; 
        }
        else if (n[i] == '1') {
            count_ones++;  
            count_zeros = 0; 
        }
        
        if (count_zeros >= 7 || count_ones >= 7) {
            cout << "YES" << endl;
            return 0;  
        }
    }
    
    cout << "NO" << endl;
    
    return 0;
    
}