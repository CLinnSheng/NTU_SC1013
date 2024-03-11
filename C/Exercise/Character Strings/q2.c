#include <stdio.h>
#include <string.h>
void insertChar(char *str1, char *str2, char ch);
int main()  
{
   char a[80],b[80];
   char ch, *p;
    
   printf("Enter a string: \n");   
   fgets(a, 80, stdin);
   if (p=strchr(a,'\n')) *p = '\0';  
   printf("Enter a character to be inserted: \n");   
   ch = getchar();
   insertChar(a,b,ch);
   printf("insertChar(): ");   
   puts(b);      
   return 0;
}
void insertChar(char *str1, char *str2, char ch){

    int n = 0;
    while (*str1 != '\0'){

        int j;

        for (j = 0; j < 3 && *str1; j++){
            str2[n++] = *str1;
            str1 ++;
        }

        if (j == 3)
            str2[n++] = ch;
        
    };

    str2[n] = '\0';
}