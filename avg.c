#include <stdio.h>

void main()

{

    int x,y,z,sum;

    float avg;

    printf("Enter Three Integers : ");

    scanf("%d%d%d",&x,&y,&z);

    sum=x+y+z;

    avg=sum/3.0; //3.0 to store float value

    printf("\nSum =%d \nAverage =%f",sum,avg);

}
