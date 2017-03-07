#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int num, certo, palpite;

int main()
{
// Função para salvar na variável num o valor aleatório
    srand(time(NULL));
    num = (rand()% 100 ) + 1;
//------------------------------------------------------------------------------------------------
    cout << "Bem Vindo ao programa para advinhar numeros!" << endl;
    cout << "Tente advinhar o número entre 1 e 100  Para debug o numero eh:" << num  << "\n" ;
// Laço para continuar até o usuário acertar e verificar a resposta
    while (certo!= 1){

    cout << "Digite um palpite" << endl;
    cin >> palpite;
    if (palpite > num){
    cout << "Valor maior! \n";
    }else if (num > palpite){
    cout << "Número menor! \n";
    } else if (palpite == num){
    cout << "Mizeravi acertou! \n";
    certo = 1;
    }

    }
    return 0;
}
