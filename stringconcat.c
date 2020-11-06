#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{

    char a[20],b[20],c[40];
    int i,j;

    printf("\n Enter 2 string");
    scanf("%s%s",a,b);

        i=0;
        while(a[i]!='\0')  //a not=null
        {
            c[i]=a[i];
            i++;
        }

        j=0;
        while(b[i]!='\0')   //b not=null
        {
            c[i]=b[j];
            j++;
            i++;
        }

        c[i]='\0';
        printf("\n%s",c);
        return 0;
}
