#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char a[20];
    int n;

    printf("\n Enter a string");   //getting user i/p
    scanf("%s",&a);

    n=strlen(a);                  //string len func

    printf("\n%d",n);             //printing len of the string

    return 0;
}


