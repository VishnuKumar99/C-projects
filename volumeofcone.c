#include <stdio.h>
int main()
{
  float v, r, h;
  printf("\nEnter radius of cone:");
  scanf("%f", &r);
  printf("\nEnter height of cone:");
  scanf("%f", &h);

  v = (22 * r * r * h) / (3 * 7);

  printf("\nvolume of cone is:%f", v);
  return 0;
}