#include<stdio.h>
int main()
{
 int a,b,arr[4],count=0,i,d,e;
 for(i=0;i<4;i++)
 {
  printf("enter a value\n");
  scanf("%d",&a);
  arr[i]=a;
 }
 for(i=0;i<4;i++)
 {
//  printf("array value=%d\n",arr[i]);
  d=arr[i];
  for(e=1;e<=d;e++)
  {
  b=d%e;
  if(b==0)
  {
  count=count+1;
  }
}
 if(count==2)
 {
  printf("arr[%d]=it is prime %d\n",i,arr[i]);
 }
 else
 {
  printf("arr[%d]=it is not a prime %d\n",i,arr[i]);
 }
count=0;
}
}
