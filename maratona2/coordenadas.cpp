#include <bits/stdc++.h>

using namespace std;

int main(){

    float x,y;

    cout << "Valor de X: " << endl;
    cin >> x;
    cout << "Valor de Y: " << endl;
    cin >> y;

    if(x > 0 && y > 0){
        cout << "Q1";
    }
    else if(x < 0 && y > 0){
        cout << "Q2";
    }
    else if(x < 0 && y < 0){
        cout << "Q3";
    }
    else if(x > 0 && y < 0){
        cout << "Q4";
    }
    else if(x == 0 && y == 0){
        cout << "Origem ";
    }
    else if(x == 0){
        cout << "Eixo y ";
    }
    else{
        cout << "Eixo x ";
    }
}