#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    printf("\nEnter n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        if(n%i==0)
        printf("\n%d",i);
}
