#include <stdio.h>
#include <string.h>
#define MAX 100
typedef struct {
 char name[20];
 int telno;
} PhoneBk;
void printPB(PhoneBk *pb, int size);
int readin(PhoneBk *pb);
void search(PhoneBk *pb, int size, char *target);
int main()
{
 PhoneBk s[MAX];
 char t[20], *p;
 int size=0, choice;
 char dummychar;

 printf("Select one of the following options: \n");
 printf("1: readin()\n");
 printf("2: search()\n");
 printf("3: printPB()\n");
 printf("4: exit()\n");
 do {
 printf("Enter your choice: \n");

 scanf("%d", &choice);
 switch (choice) {
 case 1:
 scanf("%c", &dummychar);
 size = readin(s);
 break;
 case 2:
 scanf("%c", &dummychar);
 printf("Enter search name: \n");
 fgets(t, 20, stdin);
 if (p=strchr(t,'\n')) *p = '\0';
 search(s,size,t);
 break;
 case 3:
 printPB(s, size);
 break;
 }
 } while (choice < 4);
 return 0;
}
void printPB(PhoneBk *pb, int size){

    puts("The phonebook list:");

    if (size == 0){
        puts("Empty phonebook");
        return;
    }

    else
        for (int i = 0; i < size; i++)
            printf("Name: %s\nTelno: %d\n", pb[i].name, pb[i].telno);
    
}

int readin(PhoneBk *pb){

    int cnt = 0;
    char *p;

    do{
        puts("Enter name:");
        scanf("\n");
        fgets(pb[cnt].name, 20, stdin);
        if (p = strchr(pb[cnt].name, '\n'))
            *p = '\0';

        if (!(strcmp(pb[cnt].name, "#")))
            return cnt;

        puts("Enter tel:");
        scanf("%d", &pb[cnt].telno);
        cnt++;
    } while (1);

}

void search(PhoneBk *pb, int size, char *target){

    for (int i = 0; i < size; i++)
        if (!(strcmp(pb[i].name, target))){
            printf("Name = %s, Tel = %d", pb[i].name, pb[i].telno);
            return;
        }

    puts("Name not found!");
}