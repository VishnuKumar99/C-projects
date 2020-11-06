#include <stdio.h>
int main()
{
  float r, vol;
  printf("Enter the radius of hemisphere");
  scanf("%f", &r);
  vol = (2 * 3.14 * r * r * r) / 3;

  printf("\n volume of hemisphere is: %.3f", vol);
}