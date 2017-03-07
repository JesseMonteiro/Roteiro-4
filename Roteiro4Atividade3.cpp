#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int n, m, j;
int dado[6];
int lado1, lado2, lado3, lado4, lado5, lado6;
int jogar = 1;
float porc;





int main()
{
    cout << "Bem vindo ao programa para jogar dados e saber qual lado mais caiu" << endl;
    while (jogar != 0){
    cout << "Digite quantas vezes você deseja que o dado rode \n";
    cin >> jogar;
    int i=0;
    while (i < jogar){
    srand(j);
    j++;
    m = rand()% 6 + 1;
    if (m == 1){
    lado1+=1;
    }
    if (m == 2){
    lado2+=1;
    }
    if (m == 3){
    lado3+=1;
    }
    if (m == 4){
    lado4+=1;
    }
    if (m == 5){
    lado5+=1;
    }
    if (m == 6){
    lado6+=1;
    }

    cout << m;
    i++;
    }
    porc = (lado1/jogar)*100;
    cout << "\nO lado 1 teve " << porc << "%\n";
    porc = (lado2/jogar)*100;
    cout << "O lado 2 teve " << porc << "%\n";
    porc = (lado3/jogar)*100;
    cout << "O lado 3 teve " << porc << "%\n";
    porc = (lado4/jogar)*100;
    cout << "O lado 4 teve " << porc << "%\n";
    porc = (lado5/jogar)*100;
    cout << "O lado 5 teve " << porc << "%\n";
    porc = (lado6/jogar)*100;
    cout << "O lado 6 teve " << porc << "%\n";


    }
    return 0;
}
