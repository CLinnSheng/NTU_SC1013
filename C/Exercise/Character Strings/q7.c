#include <stdio.h>
#include <string.h>
int longWordLength(char *s);
int main()  
{
   char str[80], *p;
    
   printf("Enter a string: \n");
   fgets(str, 80, stdin);
   if (p=strchr(str,'\n')) *p = '\0';    
   printf("longWordLength(): %d\n", longWordLength(str));     
   return 0;
}
int longWordLength(char *s){

    int max = 0;

    int cnt = 0;
    for (int i = 0; i < strlen(s) + 1; i++) // strlen(s) + 1 because need to check for single word, eg : "Hello"

        if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
            cnt++;
        else{
            if (max < cnt)
                max = cnt;
            
            cnt = 0;
        }


    return max;

}