#include <stdio.h>
void main()
{

  // To reverse Digits of numbers
  int reverseDigits(int num)
  {
    int rev = 0;
    while (num > 0)
    {
      rev = rev * 10 + num % 10;
      num /= 10;
    }
    return rev;
  }

  // To square number
  int square(int num)
  {
    return (num * num);
  }

  // To check Adam Number
  bool checkAdamNumber(int num)
  {
    // Square first number and square
    // reverse digits of second number
    int a = square(num);
    int b = square(reverseDigits(num));

    // If reverse of b equals a then given
    // number is Adam number
    return a == reverseDigits(b);
  }

  // Driver program to test above functions
  int main()
  {
    int num = 12;

    if (checkAdamNumber(num))
    {
      printf("Adam Number");
    }
    else
    {
      printf("Not a Adam Number");
    }
    return 0;
  }
}
