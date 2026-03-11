#include<iostream>
using namespace std;
int main(){
    int row, col;
    cin >> row >> col;
    char arr[row][col];
    
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> arr[i][j];
            
            if(arr[i][j] == 'C' || arr[i][j] == 'M' || arr[i][j] == 'Y'){
                cout << "#Color";
                return 0;
            }

        }
    }
    
    cout << "#Black&White";
}