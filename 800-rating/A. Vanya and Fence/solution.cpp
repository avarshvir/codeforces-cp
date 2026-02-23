#include<iostream>
using namespace std;
int main(){
    int n; 
    int h;
    cin >> n >> h;
    int total = 0;
    for(int i = 0; i < n; i++){
        int height;
        cin >> height;
        if(height <= h){
            total = total+1;
        }
        else{
            total = total+2;
        }
    }
    cout << total;
}