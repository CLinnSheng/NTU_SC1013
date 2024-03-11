#include <stdio.h>
#include <string.h>
struct student{
   char name[20]; /* student name */
   double testScore; /* test score */
   double examScore; /* exam score */
   double total;  /* total = (testScore+examScore)/2 */
};
double average();
int main()
{
   printf("average(): %.2f\n", average());            
   return 0;
}
double average(){

    struct student DATA[50];
    char *p, trash;
    int cnt = 0;

    for (int i = 0; i < 50; i++){
        
        puts("Enter student name:");
        fgets(DATA[cnt].name, 20, stdin);
        if (p = strchr(DATA[cnt].name, '\n'))
            *p = '\0';

        if ( !(strcmp("END", DATA[cnt].name)))
            break;

        puts("Enter test score:");
        scanf("%lf", &DATA[cnt].testScore);

        puts("Enter exam score:");
        scanf("%lf", &DATA[cnt].examScore);

        DATA[cnt].total = (DATA[cnt].examScore + DATA[cnt].testScore) / 2;

        printf("Student %s total = %.2lf\n", DATA[cnt].name, DATA[cnt].total);
        scanf("%c", &trash);
        
        cnt++;
    }

    double ttl = 0;

    for (int i = 0; i < cnt; i++)
        ttl += DATA[i].total;

    if (cnt)
        return ttl / cnt;
    
    return 0;
}