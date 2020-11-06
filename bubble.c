#include<stdio.h>
#include<conio.h>

void bubble_sort(int arr[],int num)
{
 /*[4,2,5,6]*/  /*[4,2]*/
  int i=0,j=0,temp;
  
  for(i=0;i<num;i++)
  { /*4-0-3,  4>9,4>5,4>2 sort 2,4 then i=1*/
    for(j=0;j<num-i-1;j++) 
	{
	/*4,2*/
 	 if(arr[j]>arr[j+1])
 	  {
	 temp=arr[j]; /*4*/
	 arr[j]=arr[j+1]; /*2*/
	 arr[j+1]=temp; /*2,4*/
 	  }
	} 
  
  }
 
}

int main()
{
  int arr[50],num,i;
  printf("hi vishnu enter number of array elements\n");
  scanf("%d",&num);
  
  printf("entered %d number\n",num);
  
  for(i=0;i<num;i++)
  scanf("%d",&arr[1]);
  
  bubble_sort(arr,num);
  
  printf("the sorted array is..\n");
  for(i=0;i<num;i++)
  printf("%d\n",arr[i]);
 
return 0;
}

