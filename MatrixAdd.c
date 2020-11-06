#include<stdio.h>
#include<conio.h>
int main(){

    int a[10][10],b[10][10],r,c,i,j,d[10][10];

    printf("\nEnter r and c");
    scanf("%d%d",&r,&c);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
    {

        printf("\nEnter element:");
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)

        d[i][j]=a[i][j]+b[i][j];

    for(i=0;i<r;i++)
        {
        for(j=0;j<c;j++)
            printf("\t%d",d[i][j]);
        printf("\n");

        }
        getch();
return (0);
}

