#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

using namespace std;

int main(){
    // Código que permite o terminal ler carácteres
    setlocale(LC_ALL, "Portuguese");

    int sair;
    // While para encerrar o programa
    while(sair != 3){

    system("clear||cls");

    cout << "Calculadora de conversões de base" << endl;
    cout << "Pressione '1' para converter decimal para binário" << endl;
    cout << "Pressione '2' para converter binário para decimal" << endl;
    cout << "Pressione '3' para finalizar o programa" << endl;


    char menu;        // Variável para atribuir ao comando switch
    cin >> menu;      // Entrada que atribui valor na variável 'menu' para escolha do menu
    system("clear||cls");

    // Switch feito para dar as condições determinadas no menu
    switch(menu){

    case '1':   // Case para conversão decimal/ binário
        cout << "Digite o número decimal que voce deseja converter para binário:" << endl;

        int numero,i ,resto[8]; // Variáveis setadas para fazer a conversão/ array 'resto' para armazenar o resultado das sobras
        cin >> numero;          // Entrada do valor em decimal

        // For para gerar a conversão
        for(i = 0; i <= 7; i++){    // Repetir o calcúlo da posição 0 até a posição 7 para armazenar os restos
                                    // 'i++' para a cada vez que acontecer a repetição, o array pular para a próxima posição
            resto[i] = numero % 2;  // Para gerar e armazenar a sobra da divisão decimal pela base 2(binário)
            numero = numero / 2;    // Para a cada repetição dividir o novo quociente por 2
        }

        cout << "O resultado é: " ; // 'cout' fora do for para não repetir a impressão 8 vezes

        //for invertido, começando da posição 7 até posição 0, imprimindo o resto (resultado binário) de trás para frente
        for(i = 7; i >= 0; i--){

            cout << resto[i];
        }
        cout << endl;

        system("pause"); // Pause para o programa não rodar rapidamente, possibilitando vermos os resultados
        break;



    case '2':
        cout << "Digite o numero binário que voce deseja converter para decimal:" << endl;
        system("pause");
    break;



    case '3': //case feito para finalizar o programa, encerrando o ciclo while, atribuindo valor 3 a variável sair
        sair = 3;
    cout << sair;
    break;

// default feito para caso o usuário não escolha nenhum valor definido no menu, imprimir texto pedindo a escolha de uma opção
    default:
        cout << "Escolha uma das opções a cima" << endl;
    system("pause");
    break;

    }

    }


}

