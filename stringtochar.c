
#include<stdio.h>
#include<conio.h>
int main()
{
    char a[100];
    int i;

    printf("\n enter a string");
    scanf("%s",&a);

    i=0;
    while(a[i]!='\0')
    {
        putch(a[i]);
        i++;
    }
    return 0;

}
