#include <stdio.h>
#include <string.h>
void decTohexStr(char *str, int num);
int main()
{
 int num,i;
 char str[20];
 printf("Enter a decimal number: \n");
 scanf("%d",&num);
 decTohexStr(str,num);
 printf("decTohexStr(): %s\n",str);
 return 0;
}

void decTohexStr(char *str, int num)
{
    int cnt = 0;

    while (num > 0){

        int n = num % 16;

        if (n <= 9)
            *(str + cnt++) = (char)('0' + n);
        else
            *(str + cnt++) = (char)(n + 55);
        
        num /= 16;
    }

    *(str + cnt) = '\0';

    char c, *end;
    end = str + strlen(str) - 1;

    while (str < end){
        c = *str;
        *str++ = *end;
        *end-- = c;
    }

}