#include<stdio.h>

#include<stdlib.h>
int main(){
    int a[10],n,i;
    printf("Enter the decimal number to convert: ");
    scanf("%d",&n);
    for(i=0;n>0;i++)
    {

        a[i]=n%2;
        n=n/2;
    }
    printf("\nBinary of given number is=");
    for(i=1-1;i>=0;i--)
    {

        printf("%d",a[i]);

    }
    return 0;
}
