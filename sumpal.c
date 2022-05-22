#include<stdio.h>
int sumsq(int a);
int a,b,c,d;
int main()
{
 printf("enter a number\n");
 scanf("%d",&a);
 d=sumsq(a);
 printf("sumsq=%d\n",d);
}
int sumsq(int a)
{
 while(a>0)
 {
  b=a%10;
  c=(b*b)+c;
  a=a/10;
 }
 return c;
}
