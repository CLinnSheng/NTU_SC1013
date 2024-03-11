#include <stdio.h>
#include <string.h>
int countSubstring(char str[], char substr[]);
int main()
{
 char str[80], substr[80];
 int result;

 printf("Enter the string: \n");
 scanf("%s",str);
 printf("Enter the substring: \n");
 scanf("%s",substr);
 result = countSubstring(str, substr);
 printf("countSubstring(): %d\n", result);
 return 0;
}
int countSubstring(char str[], char substr[])
{
    int cnt = 0;

    for (int i = 0; i < strlen(str) - strlen(substr) + 1; i++)
        if (!(strncmp(substr, str + i, strlen(substr))))
            cnt++;

    return cnt;
}