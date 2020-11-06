#include<stdio.h>
int main() {
   int n;
   char *arr[2] = {"Even", "Odd"};
   printf("Enter a number: "); //take the number from the user
   scanf("%d", &n);
   (n & 1 && printf("odd"))|| printf("even"); //n & 1 will be 1 when 1 is present at LSb, so it is odd.
}
