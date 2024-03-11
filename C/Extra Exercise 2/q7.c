#include <stdio.h>
#include <string.h>
#include <ctype.h>
void compressStr(char *str);
int main()
{
 char str[40];

 printf("Enter a sequence of characters: \n");
 scanf("%s", str);
 printf("compressStr(): ");
 compressStr(str);
 return 0;
}
void compressStr(char *str)
{
    int cnt = 0, j = 0;
    char temp, tempstr[40];
    strcpy(tempstr, str);

    if (strlen(tempstr) == 1){
        puts(str);
        return;
    }

    for (int i = 0; i < strlen(tempstr) - 1; i++){

        if (*(tempstr + i) == *(tempstr + i + 1)){
            temp = *(tempstr + i);
            cnt++;

            if (i == strlen(tempstr) - 2){
                *(str + j++) = '['; *(str + j++) = '0' + ++cnt; *(str + j++) = temp; *(str + j++) = ']';                
            }
        }

        else{

            if (cnt != 0){
                *(str + j++) = '['; *(str + j++) = '0' + ++cnt; *(str + j++) = temp; *(str + j++) = ']';
                cnt = 0;
            }

            else
                if (i == strlen(tempstr) - 2){
                    *(str + j++) = *(tempstr + i);
                    *(str + j++) = *(tempstr + i + 1);
                }
                
                else
                    *(str + j++) = *(tempstr + i);

        }
    }

    *(str + j) = '\0';
    puts(str);
}