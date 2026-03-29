#include<iostream>
#include<string>
using namespace std;

int main(){
    string n;
    cin >> n;

    bool removed = false;

    for(int i = 0; i < n.length(); i++){
        if(n[i] == '0'){
            n.erase(i, 1);
            removed = true;
            break;
        }
    }

    if(!removed){
        n.pop_back();
    }

    cout << n;
}