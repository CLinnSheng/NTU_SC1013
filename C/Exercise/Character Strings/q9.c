#include <stdio.h>
#include <string.h>
void maxCharToFront(char *str);
int main()  
{
   char str[80], *p;
    
   printf("Enter a string: \n");
   fgets(str, 80, stdin);
   if (p=strchr(str,'\n')) *p = '\0';  
   printf("maxCharToFront(): ");   
   maxCharToFront(str);  
   puts(str);
   return 0;

}

void maxCharToFront(char *str){

    int max = 0, index;
    char *ptr;

    for (int i = 0; i < strlen(str); i++)
        if (max < str[i]){
            max = str[i];
            index = i;
            ptr = &str[i];
        }

//    for(int i = index; i > 0; i--)
//        str[i] = str[i - 1];

//    using pointer
    
     while (ptr > str){

         *ptr = *(ptr - 1);
         ptr--;

     }
    
    str[0] = max;
    
}
