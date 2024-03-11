#include <stdio.h>
#include <math.h>
#include <string.h>
int hexStrToDec(char *hex);
int main()
{
 int num;
 char hex[100];

 printf("Enter a hexadecimal number: \n");
 scanf("%s",&hex);
 num=hexStrToDec(hex);
 printf("hexStrToDec(): %d\n", num);
 return 0;
}
int hexStrToDec(char *hex){
    
    int ttl = 0, i = 0;

    while (*(hex + i)){

        if (*(hex + i) >=48 && *(hex + i) <= 57)
            ttl += (int)(*(hex + i) - '0')* pow(16, strlen(hex) - 1 - i);
        else
            ttl += ((int)*(hex + i) - 55) * pow(16, strlen(hex) - 1 - i);
        i++;
    }
    return ttl;
}