
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char a[20],b[20];

    printf("\n Enter a string");
    scanf("%s",a);

    strcpy(b,a);
    strrev(b);

    printf("\n%s",b);
    return 0;

}
