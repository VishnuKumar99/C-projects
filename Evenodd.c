#include<stdio.h>
#include<conio.h> //without using conditional stmts
int main() {
   int n;
   char* arr[2] = {"Even", "Odd"};
   printf("Enter a number: "); //take the number from the user
   scanf("%d", &n);
   printf("The number is: %s", arr[n%2]); //get the remainder to choose the string

}
