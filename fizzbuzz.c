/*1. If i is a multiple of both 3 and 5 prints "FizzBuzz" instead of number
2. If i is a multiple of 3 but not 5 prints "Fizz" instead of number
3. If i is a multiple of 5 but not 3 prints "Buzz" instead of number
4. If i is a not multiple of 3 or 5 prints i value as usual.*/

#include <stdio.h>
int main()
{
  int i, n;
  printf("Enter the number :");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    // number divisible by 3 and 5 will always be divisible by 15, print 'FizzBuzz' in place of the number
    if (i % 15 == 0)
      printf("FizzBuzz\t");

    // number divisible by 3, print 'Fizz' in place of the number
    else if ((i % 3) == 0)
      printf("Fizz\t");

    // number divisible by 5, print 'Buzz' in place of the number
    else if ((i % 5) == 0)
      printf("Buzz\t");

    else // print the number
      printf("%d\t", i);
  }
  return 0;
}
