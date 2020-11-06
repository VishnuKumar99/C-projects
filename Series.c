#include<stdio.h>

void printSeries(int n){
  int s1=0,s2=0;
  int i,res;
  for(i=1;i<=n;i++)
  {
    if(i%2 == 1){ //odd number series
      res = s1;
      s1 += 6;
    }else{
      res = s2;
      s2 += 7;
    }

    printf("%d",res);
  }

}

int main()
{
int n;
  printf("\nWhich term in the series You want");
  scanf("%d", &n);
  printSeries(n);
}
