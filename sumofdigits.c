#include<stdio.h>
#include<conio.h>
int main()
{
    int s,n,r;
    printf("\n Enter n");
    scanf("%d",&n);

    s=0;
    while(n!=0)
    {

        r=n%10;
        s=s+r;
        n=n/10;
    }
    printf("\n%d",s);
}
