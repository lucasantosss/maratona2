#include <bits/stdc++.h>

using namespace std;

int main(){

    float x;
    float y;

    cout << "Digite dois n�meros: ";
    cin >> x;
    cin >> y;

    while(x != y){
        if(x < y){
        cout << "Crescente" << endl;
    }else{
        cout << "Decrescente" << endl;
    }

    cout << "Digite outros dois n�meros: ";
    cin >> x;
    cin >> y;
    
    }

}
