#include<stdio.h>
#define n 6
int main()
{
 int i,a,small,large,arr[6];
 for(i=0;i<6;i++)
 {
  printf("enter values\n");
  scanf("%d",&a);
  arr[i]=a;
 }
  small=arr[0];
// large=arr[0];
 for(i=0;i<6;i++)
 {
  printf("array values=%d\n",arr[i]);
  if(arr[i]<small)
  {
   small=arr[i];
  // printf("small value is %d=%d\n",i,small);
  }
  if(arr[i]>large)
  {
   large=arr[i];
  // printf("large value is %d=%d\n",i,large);
  }
}
 printf("small value %d\n",small);
 printf("largeb value %d\n",large);
}
