#include <stdio.h>
#include <string.h>
int strOverWrite(char *s1, char *s2, int pos);
int main()
{
 char s1[40], s2[40], *p;
 int pos, total;
 printf("Enter string 1: \n");
 fgets(s1, 80, stdin);
 if (p=strchr(s1,'\n')) *p = '\0';
 printf("Enter string 2: \n");
 fgets(s2, 80, stdin);
 if (p=strchr(s2,'\n')) *p = '\0';
 printf("Enter position: \n");
 scanf("%d", &pos);
 total = strOverWrite(s1, s2, pos);
 printf("strOverWrite(): %s %d\n", s1, total);
 return 0;
}

int strOverWrite(char *s1, char *s2, int pos)
{
    int len_s1 = strlen(s1);
    int len_s2 = strlen(s2);

    // Calculate the number of characters to overwrite
    int overwrite_len = (len_s1 - pos < len_s2) ? (len_s1 - pos) : len_s2;

    // Copy s2 into s1 at the specified position
    strncpy(s1 + pos, s2, overwrite_len);

    return overwrite_len;
}