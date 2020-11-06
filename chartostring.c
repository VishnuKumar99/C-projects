
#include<stdio.h>
#include<conio.h>
int main()
{
 char a[100];
int n,i;
 printf("\nEnter n");
 scanf("%d",&n);

 for(i=0;i<n;i++)
 {
     printf("\n enter %d character :",i+1);
     a[i]=getche();
 }
 a[i]='\0';
 printf("\n%s",a);
 return 0;

}
