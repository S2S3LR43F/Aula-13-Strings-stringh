#include <stdio.h>
#include <stdlib.h>
#include <string.h> //NOVO, COPIAR STRING.

int main()
{
    char str1[100] = "bom  ";
    char str2[100] = "bom";
    if(strcmp(str1,str2)== 1)
        printf("Strings iguais\n");
    else
        printf("Strings diferentes\n");


    system("pause");
    return 0;

}
