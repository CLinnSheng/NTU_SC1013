#include <stdio.h>
#include <math.h>
#include <string.h>
int octStrTodec(char *str);

int main()
{
 char str[20],*sp;
 int num;

 printf("Enter an octal number: \n");
 scanf("%s",str);
 num=octStrTodec(str);
 printf("octStrTodec(): %d\n",num);
 return 0;
}

int octStrTodec(char *str){

    int ttl = 0;

    for (int i = 0; i < strlen(str); i++)
        ttl += (*(str + strlen(str) -1 - i) - '0') * pow(8, i);
    
    return ttl;
    
}