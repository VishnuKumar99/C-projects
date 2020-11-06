#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char a[20],b[20]; //palindrome using string or not
    int n;

    printf("\n enter a string");
    scanf("%s",a);

    strcpy(b,a);
    strrev(b);
    n=strcmp(a,b);
    if(n==0)
        printf("\n %s is a palindrome",a);
    else
        printf("\n %s is not a palindrome",a);
}
