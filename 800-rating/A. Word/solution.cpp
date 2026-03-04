#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin >> s;
    int count_big = 0;
    for(int i = 0; i < s.length(); i++){
        if(isupper(s[i])){
            count_big++;
        }
    }
    int count_small = s.length() - count_big;
    if(count_big > count_small){
        for(int i = 0; i < s.length(); i++){
            s[i] = toupper(s[i]);
        }
    }
    else {
        for(int i = 0; i < s.length(); i++){
            s[i] = tolower(s[i]);
        }
    }
    cout << s << endl;
    return 0;
    
}