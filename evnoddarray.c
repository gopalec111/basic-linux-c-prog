#include<stdio.h>
int main()
{
 int i,a,arr[6],b;
//printf("enter array size\n");
//scanf("%d",&n);
 for(i=0;i<6;i++)
{
 printf("enter input\n");
 scanf("%d",&a);
 arr[i]=a;
 printf("array value=%d\n",arr[i]);
}
 for(i=0;i<6;i++)
{
 b=arr[i]%2;
 if(b==0)
 {
  printf("it is even num=%d\n",arr[i]);
 }
 else
 {
  printf("it is odd num=%d\n",arr[i]);
 }
}
} 
