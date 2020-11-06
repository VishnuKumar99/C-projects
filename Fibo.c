#include <stdio.h>
#include <conio.h>
int main()
{

    int i, n, a, b, c;

    printf("\nEnter n");
    scanf("%d", &n);
    a = -1;
    b = 1;
    for (i = 1; i <= n; i++)
    {

        c = a + b;
        printf("\t%d", c);
        a = b;
        b = c;
    }
}
