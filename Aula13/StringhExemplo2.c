#include <stdio.h>
#include <stdlib.h>
#include <string.h> //NOVO, COPIAR STRING.

int main()
{
    char str1[100] = "bom ";
    char str2[100] = "dia";
    strcat(str1,str2);
    //printf("%s", str1);
    fgets(str1, 100, stdin);//printf de char com espaço


    system("pause");
    return 0;

}
