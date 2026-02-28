#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int officers = 0;
    int untreated = 0;
    
    int events;
    
    for(int i = 0; i < n; i++){
        cin >> events;
        
        if(events >= 1){
            officers += events; 
        }
        if (events == -1){
            if (officers > 0){
                officers--;
            }
            else{
                untreated++;
            }
        }
    }
        cout << untreated;
    
}