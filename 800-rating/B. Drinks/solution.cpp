#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    
    double sum = 0;
    double avg;
    
    for(int i = 0; i < n; i++){
        double p;
        cin >> p;
        
        sum += p;
    }
    
    avg = sum/n;
    cout << avg;
}