#include <stdio.h>
int main()
{
  float v, r;
  printf("\n Enter the radius of the sphere");
  scanf("%f", &r);

  v = (4 * 22 * r * r * r) / (7 * 3);
  printf("volume of sphere:%f\n", v);
  return 0;
}