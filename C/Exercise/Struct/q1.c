#include <stdio.h>
typedef struct {
 char name[20];
 int age;
} Person;
void readData(Person *p);
Person findMiddleAge(Person *p);
int main()
{
 Person man[3], middle;

 readData(man);
 middle = findMiddleAge(man);
 printf("findMiddleAge(): %s %d\n", middle.name, middle.age);
 return 0;
}

void readData(Person *p)
{

    for (int i = 0; i < 3; i ++){
        printf("Enter person %d:\n", i + 1);
        scanf("%s%d", &p[i].name, &p[i].age);

    }

}

Person findMiddleAge(Person *p){

    int max = -1;
    Person temp;

    for (int i = 0; i < 2; i ++)
        for (int j = 0; j < 2 - i; j++)
            if (p[j].age > p[j + 1].age){
                temp = p[j + 1];
                p[j + 1] = p[j];
                p[j] = temp;
            }

    return p[1];
}
