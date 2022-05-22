#include<stdio.h>
int main()
{
 int arr[6],i,sum,result=0;
// printf("given numbers\n");
// scanf("%d",&sum);
 for(i=0;i<6;i++)
 {
  printf("input values\n");
  scanf("%d",&sum);
  arr[i]=sum;
  printf("array value=%d\n",arr[i]);
 }
 for(i=0;i<6;i++)
 {
  result=result+arr[i];
  printf("result of array[%d]=%d\n",i,result);
 }
}
