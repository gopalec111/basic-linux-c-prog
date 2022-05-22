#include<stdio.h>
int main()
{
 int arr[5],i,c,a,b,count=0;
 for(i=0;i<5;i++)
 {
  printf("enter values\n");
  scanf("%d",&a);
  arr[i]=a;
 }
 for(i=0;i<5;i++)
 {
  printf("arr[%d]=%d\n",i,arr[i]);
  for(b=1;b<=a;b++)
  {
   c=arr[i]%b;
   if(c==0)
   {
    count=count+1;
   }
  }
 if(count==2||count==1)
 {
  printf("it is prime num\n");
 }
 else
 {
  printf("it is not prime num\n");
 }
 count=0;
}
}
