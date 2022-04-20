#include <iostream>

using namespace std;

int main(){

    float salario, porcentagem, aumento, novoSalario;
 
    cout << "Digite o salário da pessoa: ";
    cin >> salario;

    if(salario <= 1000.00){
        porcentagem = 20;
    }
    else if(salario <= 3000.00){
        porcentagem = 15;
    }
    else if(salario <= 8000.00){
        porcentagem = 10;
    }
    else{
        porcentagem = 5;
    }

    aumento = salario * porcentagem / 100;
    novoSalario = salario + aumento;

    cout << "Novo salario = R$" << novoSalario << endl;
    cout << "Aumento = R$" << aumento << endl;
    cout << "Porcentagem = R$" << porcentagem << endl;
    
}