#include <stdio.h>
#include <string.h>
#define INIT_VALUE 999
int findSubstring(char *str, char *substr);
int main()
{
   char str[40], substr[40], *p;  
   int result = INIT_VALUE;      
   printf("Enter the string: \n");
   fgets(str, 80, stdin);
   if (p=strchr(str,'\n')) *p = '\0';  
   printf("Enter the substring: \n");
   fgets(substr, 80, stdin);
   if (p=strchr(substr,'\n')) *p = '\0';  
   result = findSubstring(str, substr);
   if (result == 1)
      printf("findSubstring(): Is a substring\n");
   else if ( result == 0)
      printf("findSubstring(): Not a substring\n");   
   else         
      printf("findSubstring(): An error\n");    
   return 0;
}
int findSubstring(char *str, char *substr)   
{
    for (int i = 0; i <= strlen(str) - strlen(substr); i++)
        if (!strncmp(substr, str + i, strlen(substr)))
            return 1;
    
    return 0;
}   