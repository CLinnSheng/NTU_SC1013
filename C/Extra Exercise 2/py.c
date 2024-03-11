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
    char tempstr[40], temp;
    strcpy(tempstr, str);

    if(strlen(tempstr) == 1)
        puts(str);
        
    for (int i = 0; i < strlen(tempstr) - 1; i++){
        if (tempstr[i] == tempstr[i + 1]){
            cnt++;
            temp = tempstr[i];
            if (i == strlen(tempstr) - 2)
                if (cnt != 0){
                    *(str + j++) = '['; *(str + j++) = '0' + ++cnt; *(str + j++) = temp;
                    *(str + j++) = ']';
                }


        }

        else{

            if (i == strlen(tempstr) - 2){
                if (cnt != 0){
                    *(str + j++) = '['; *(str + j++) = '0' + ++cnt; *(str + j++) = temp;
                    *(str + j++) = ']';
                    *(str + j++) = tempstr[i + 1];
                }

                else{
                    *(str + j++) = tempstr[i];
                    *(str + j++) = tempstr[i + 1];
                }
            }
            else{

                if (cnt != 0) {
                *(str + j++) = '['; *(str + j++) = '0' + ++cnt; *(str + j++) = temp;
                *(str + j++) = ']'; 
                cnt = 0;               
                }

                else{
                    *(str + j++) = tempstr[i];
                    cnt = 0;
                }
            }
        }
    }

    *(str + j++) = '\0';
    puts(str);
}