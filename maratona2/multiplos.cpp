#include <bits/stdc++.h>

using namespace std;

int main(){

   int x, y;

   cout << "Digite dois numeros inteiros:";
   cin >> x;
   cin >> y;
   
    if(x % y == 0 && y % x == 0){
      cout << "S�o multiplos";
    }
    else{
      cout << "N�o s�o multiplos";
    }
   
}
