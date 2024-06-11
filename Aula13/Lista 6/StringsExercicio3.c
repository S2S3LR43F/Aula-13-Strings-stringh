#include <stdio.h>
#include <stdlib.h>
#include <string.h> //NOVO, COPIAR STRING.
#include <locale.h>

int main(){
 setlocale(LC_ALL, "Portuguese");
    char nome[100];
    int i, tamanho = 0;

    printf("Digite uma nome: ");
    gets(nome);

    for(i=0; nome[i] != '\0'; i++){
        tamanho++;

    }
    printf("tamanho = %d\n", tamanho);

    system("pause");
    return 0;
}
