#include<stdio.h>

void fact();

int main()
{
 fact();
}

void fact()
{
long fact=1;
long i;
long n;

printf("\nThe factorial of number N");
printf("\nenter the factorial number: ");
scanf("%ld",&n);

for(i=2;i<=n;i++)
fact=fact * i;

printf("\nThe factorial of %ld is %ld",n,fact);

}



