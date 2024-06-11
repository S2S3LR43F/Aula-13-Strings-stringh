#include <stdio.h>
#include <stdlib.h>
#include <string.h> //NOVO, COPIAR STRING.

int main()
{
    char str[20];
    int i;
    printf("Leia uma string: ");
    gets(str);

    for(i=0; i < 4; i++){
        printf("%c", str[i]);

    }
    printf("\n");

    system("pause");
    return 0;
}
