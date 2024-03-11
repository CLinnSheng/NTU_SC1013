#include <stdio.h>

int main(){

    float input;

    printf("Enter the temperature in degree F:\n");
    scanf("%f", &input);

    while(input != -1){

        printf("Converted degree in C: %.2f\n", ((float)5/9) * (input -32));

        printf("Enter the temperature in degree F:\n");
        scanf("%f", &input);

    };

    return 0;

}