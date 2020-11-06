#include <stdio.h>

void main()

{

    int years;

    float amount,rate,interest;

    printf("Enter Principle Amount : ");

    scanf("%f",&amount);

    printf("Enter Rate Of Interest : ");

    scanf("%f",&rate);

    printf("Enter Period in Years : ");

    scanf("%d",&years);

    interest=(amount*rate*years)/100;

    printf("\nSimple Interest = %f",interest);

}
