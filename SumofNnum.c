#include<stdio.h>
#include<conio.h>
int main(){
    int i,n,s;

    printf("\n Enter n");
    scanf("%d",&n);
    s=0;
    for(i=0;i<=n;i++)
        s=s+i;
    printf("\n%d",&s);

}
