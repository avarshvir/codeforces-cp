#include<iostream>
using namespace std;
int main(){
    int people; 
    long long initial_ice_cream;
    cin >> people >>  initial_ice_cream;
    
    int distressed_kid = 0;
    
    for(int i = 0; i < people; i++){
        char options;
        cin >> options;
        long long k;
        cin >> k;
        //case 1: '+';
        
        if(options == '+'){
            initial_ice_cream += k;
        }
        else if(options == '-'){
            if(initial_ice_cream >=k){
                initial_ice_cream -=k;
            }else{
                distressed_kid++;
            }
        }
    }
    cout << initial_ice_cream << " " << distressed_kid << endl;
}