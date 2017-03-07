#include <iostream>

using namespace std;

int main()
{
    cout << "Bem vindo ao programa mostrar o maior valor." << endl;
    cout << "Digite os valores ou 0 para sair." << endl;

    int a,b,c;
    while (1){
    cout << "Digite o valor" << endl;
    cin >> a;
    if(a==0){
    break;
    }
    cout << "Digite o valor" << endl;
    cin >> b;
    if(b==0){
    break;
    }
    if(a>b){
    c = a;
    }
    if (b>a){
    c = b;
    }
    if (a==b){
    cout << "Números iguais" << endl;
    }
    if(a!=b){
    cout << "O número maior é: " << c << endl;
        }
    }
    return 0;
}
