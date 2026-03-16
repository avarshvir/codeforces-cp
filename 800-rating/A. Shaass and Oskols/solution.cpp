#include<iostream>
#include<vector>
using namespace std;
int main(){
    
    int wires;
    cin >> wires;
    vector<int> birds(wires);
    for(int i = 0; i < wires; i++){
        cin >> birds[i];
    }
    
    int shots;
    cin >> shots;
    vector<pair<int,int>> shotInfo(shots);
    for(int i = 0; i < shots; i++){
        int shotWireNo, shotBirdNo;
        cin >> shotInfo[i].first >> shotInfo[i].second;
    }
    
    for(int i = 0; i < shots; i++) {
        int wire = shotInfo[i].first - 1;  
        int pos = shotInfo[i].second;

        if(wire > 0) birds[wire - 1] += pos - 1;

        if(wire < wires - 1) birds[wire + 1] += birds[wire] - pos;

        birds[wire] = 0;
    }

    for(int i = 0; i < wires; i++) {
        cout << birds[i] << endl;
    }
}