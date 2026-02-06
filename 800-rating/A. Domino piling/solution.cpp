#include<iostream>
using namespace std;

int main(){

    int m, n;
    cin >> m >> n;

    int total_squares, total_dominoes;

    total_squares = m * n;
    total_dominoes = total_squares / 2;

    cout << total_dominoes << endl;

}