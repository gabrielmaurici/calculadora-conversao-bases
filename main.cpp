#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main(){
    // C?digo que permite o terminal ler caracteres
    setlocale(LC_ALL, "Portuguese");

    int sair;
    // While para encerrar o programa
    while(sair != 3){

    system("clear||cls");

    cout << "Calculadora de convers?es de base" << endl;
    cout << "Pressione '1' para converter decimal para bin?rio" << endl;
    cout << "Pressione '2' para converter bin?rio para decimal" << endl;
    cout << "Pressione '3' para finalizar o programa" << endl;

    char menu; // Vari?vel para atribuir ao comando switch
    cin >> menu; // Entrada que atribui valor na vari?vel 'menu' para escolha do menu
    system("clear||cls");

    // Switch feito para dar as condi??es determinadas no menu
    switch(menu){

    // Case para convers?o decimal/ bin?rio
    case '1':
        cout << "Digite o n?mero decimal que voce deseja converter para bin?rio:" << endl;

        int numero,i ,resto[8]; // Vari?veis setadas para fazer a convers?o/ array 'resto' para armazenar o resultado das sobras
        cin >> numero;  // Entrada do valor em decimal

        // For para gerar a convers?o
        for(i = 0; i <= 7; i++){    // Repetir o calc?lo da posi??o 0 at? a posi??o 7 para armazenar os restos
                                    // 'i++' para a cada vez que acontecer a repeti??o, o array pular para a pr?xima posi??o
            resto[i] = numero % 2;  // Para gerar e armazenar a sobra da divis?o decimal pela base 2(bin?rio)
            numero = numero / 2;    // Para a cada repeti??o dividir o novo quociente por 2
        }

        cout << "O resultado ?: " ; // 'cout' fora do for para n?o repetir a impress?o 8 vezes

        //for invertido, come?ando da posi??o 7 at? posi??o 0, imprimindo o resto (resultado bin?rio) de tr?s para frente
        for(i = 7; i >= 0; i--){

            cout << resto[i];
        }
        cout << endl;

        system("pause"); // Pause para o programa n?o rodar rapidamente, possibilitando vermos os resultados
        break;

    case '2':
        cout << "Digite o n?mero bin?rio que voc? deseja converter para decimal:" << endl;

        int dec, bin; // Vari?veis para armazenar decimal e bin?rio
        dec = 0; // Atribuindo 0 ao dec, pois na primeira repeti??o n?o temos nenhum valor em decimal

        cin >> bin; // Entrada do usu?rio com o n?mero bin?rio

        //for feito para somar as posi??es do n?mero bin?rio, onde 'i' representa a posi??o em que cada n?mero se encontra
        for(int i = 0; i <=7; i++){
            dec = dec + pow(2, i) * (bin % 10); //+ dec, para somar todas as posi??es e calcular a convers?o em decimal
            bin = bin /10;                      //bin % 10 para puxar uma posi??o do bin?rio
        }                                       //bin/10 para a cada repeti??o puxar o pr?ximo n?mero do bin?rio
        cout << "O resultado ?: " << dec << endl;
        system("pause");
        break;

    case '3':        //case feito para finalizar o programa, encerrando o ciclo while, atribuindo valor 3 a vari?vel sair
        sair = 3;
        break;

    default:         // default feito para caso o usu?rio n?o escolha nenhum valor definido no menu, imprimir texto pedindo a escolha de uma op??o
        cout << "Escolha uma das op??es a cima" << endl;
        system("pause");
        break;
    }

    }
}
}

