#include <stdio.h>
#include <stdlib.h>
#include <string.h> //NOVO, COPIAR STRING.

int main()
{
    char str1[100], str2[100];
    printf("%d Entre com uma string: ", strlen(str2));
    fgets(str1, 100, stdin);//printf de char com espaço
    strcpy(str2, str1);
    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);

    system("pause");
    return 0;

}
