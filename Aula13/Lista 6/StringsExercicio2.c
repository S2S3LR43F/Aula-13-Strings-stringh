#include <stdio.h>
#include <stdlib.h>
#include <string.h> //NOVO, COPIAR STRING.
#include <locale.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h> //NOVO, COPIAR STRING.

int main()
{
    char str1[100];
    char letra;
    int i, encontrou = 0;
    printf("Digite uma string: ");
    gets(str1);
    printf("Digite uma letra para verificar: ");
    scanf("%c", &letra);

    for (i = 0; i < 4; i++){
        if(str1[i] == letra)
            encontrou = 1;
            break;
    }

        if (encontrou == 1){
            printf("Letra encontrada");

        }else
            printf("Letra não encontrada");



    printf("\n");
    system("pause");
    return 0;
}
