#include<iostream>
#include<string>
using namespace std;
int main(){
    
    int total = 0;
    
    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;
    
    string s;
    cin >> s;
    
    for(char c: s){
        if(c == '1'){
            total += a1;
        }
        else if(c == '2'){
            total += a2;
        }
        else if(c == '3'){
            total += a3;
        }
        else if(c == '4'){
            total += a4;
        }
    }
    
    cout << total << endl;
    
}