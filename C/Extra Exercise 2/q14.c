#include <stdio.h>
#include <string.h>
void PigLatin(char *eword, char *PLword);
int main()
{
 char eword[80];
 char PLword[80];
 printf("Enter your English word: \n");
 scanf("%s", eword);
 PigLatin(eword, PLword);
 printf("PigLatin(): %s\n", PLword);
 return 0;
}

void PigLatin(char *eword, char *PLword)
{
    if (*eword == 'a' || *eword == 'e' || *eword == 'i' || *eword == 'o' || *eword == 'u' || *eword == 'y'){
        strcat(eword, "ay");
        strcpy(PLword, eword);
    }

    else{

        int cnt = 0;

        for (int i = 0; i < strlen(eword); i++)
            if (!(*(eword + i) == 'a' || *(eword + i) == 'e' || *(eword + i) == 'i' || *(eword + i) == 'o' || *(eword + i) == 'u'))
                cnt++;
            else
                break;
  
        strcpy(PLword, eword + cnt);
        strncat(PLword, eword, cnt);
        strcat(PLword, "ay");

    }

}