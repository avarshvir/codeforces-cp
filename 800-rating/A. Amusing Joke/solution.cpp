#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main(){
    string a;
    string b;
    string c;
    
    cin >> a;
    cin >> b;
    cin >> c;
    
    string d = a + b;
    
    sort(d.begin(), d.end());
    sort(c.begin(), c.end());
    
    if(d == c){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}