#include <bits/stdc++.h>

using namespace std;

int main(){

    float x;
    float y;

    cout << "Digite dois números: ";
    cin >> x;
    cin >> y;

    while(x != y){
        if(x < y){
        cout << "Crescente" << endl;
    }else{
        cout << "Decrescente" << endl;
    }

    cout << "Digite outros dois números: ";
    cin >> x;
    cin >> y;
    
    }

}
