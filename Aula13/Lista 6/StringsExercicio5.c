#include <stdio.h>
#include <stdlib.h>
#include <string.h> //NOVO, COPIAR STRING.

int main()
{
    char str[20], copia[20];
    char palavra, str1;
    int i, tamanho;
    printf("Leia um nome: ");
    gets(str);

    tamanho = strlen(str);
    for(i=0 ;i < tamanho ; i++){
        copia[i];
        for(i<tamanho; i >= 0; i--){
            printf("%c", copia[i]);
        }

}


    printf("\n");
    system("pause");
    return 0;
}
