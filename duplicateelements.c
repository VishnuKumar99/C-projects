
#include<stdio.h>
#include<conio.h>
int main(){
    int a[10],i,n,j,k;
    printf("\n Enter n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter %d no",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
        if(a[i]==a[j])
    {

        for(k=1;k<n;k++)
            a[k]=a[k+1];
        n--;
        j--;
    }
    for(i=0;i<n;i++)
        printf("\n%d",a[i]);
    return 0;

}
