#include<stdio.h>
int main()
{
 int a,i,count=0,sum=0;
 float avg;
 printf("enter array size\n");
 scanf("%d",&a);
 int arr[a];
 printf("enter arra values\n");
 for(i=0;i<a;i++)
 {
  scanf("%d",&arr[i]);
  if((i+1)%2==0)
  {
   sum=sum+arr[i];
   count++;
  }
 }
 printf("sum=%d",sum);
 printf("cou=%d",count);
 avg=sum/count;
 printf("avg=%f",avg);
}

