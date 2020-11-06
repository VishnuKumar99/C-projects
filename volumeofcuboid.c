#include <stdio.h>
int main()
{
  float l, b, h, v;

  printf("\nEnter Length:");
  scanf("%f", &l);
  printf("\nEnter breath:");
  scanf("%f", &b);
  printf("\nEnter height:");
  scanf("%f", &h);

  v = (l * b * h);

  printf("\nvolume of cuboid is:%.3f", v);
  return 0;
}