/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void encontrarAlvo(int numeros[], int tamanho, int alvo) {
    for (int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho; j++){
            int valor1 = numeros[i];
            int valor2 = numeros[j];
            int soma = valor1 + valor2; 
            if (soma == alvo) {
                printf("O valor %d (posição %d) somado com o valor %d (posição %d) dão 55", valor1, i, valor2, j);
                return;
            }
        }
    }
}
int main()
{
    int numeros[] = {10, 20, 35, 50, 75};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);
    int alvo = 55;
    encontrarAlvo(numeros, tamanho, alvo);

    return 0;
}