#include <stdio.h>
#include <string.h>
#define TRUE 1
#define FALSE 0
int romanNum(char *str);
int main()
{
 int num;
 char roman[10];
 printf("Enter a Roman number: \n");
 scanf("%s",roman);
 num = romanNum(roman);
 printf("romanNum(): %d\n", num);
 return 0;
}

int checkWords(char c){

    switch(c){

        case 'I' : return 1;
        case 'V' : return 5;
        case 'X' : return 10;

    }

}

int romanNum(char *str){

    int ttl = 0;

    for (int i = 0; i < strlen(str); i++){

        int word_1 = checkWords(str[i]);

        if (i + 1 < strlen(str)){

            int word_2 = checkWords(str[i+1]);

            if (word_1 >= word_2)
                ttl +=  word_1;
            else{
                ttl += word_2 - word_1;
                i++;
            }

        }

        else
            ttl += word_1;

    }

    return ttl;

} 