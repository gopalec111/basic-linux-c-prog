#include<stdio.h>
int fac(int a);
int main()
{
 int x,y;
 printf("enter a factorial value\n");
 scanf("%d",&x);
 y=fac(x);
 printf("factorial value=%d\n",y);
}
 int fac(int a)
{
 int z;
 if(a!=0)
 {
  return z=a*fac(a-1);
 }
 else
 {
  return 1;
 }
}
