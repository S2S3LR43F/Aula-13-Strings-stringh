#include <stdio.h>
#include <stdlib.h>
#include <string.h> //NOVO, COPIAR STRING.

int main()
{
    char str[20];
    char palavra;
    int i, tamanho;
    printf("Leia uma string: ");
    gets(str);

    tamanho = strlen(str);
    for(i=tamanho-1 ;i >= 0 ; i--){

        printf("%c", str[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}
