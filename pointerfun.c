#include<stdio.h>
void sum(int a,int b);
int mul(int a,int b);
void main()
{
 int a,b;
 (*sum)(5,6);
 printf("enter inputs a and b\n");
 scanf("%d%d",&a,&b);
 int result=mul(a,b);
 printf("mul output=%d\n",result);
}
 void sum(int x,int y)
{
 int sum;
 sum=x+y;
 printf("sum of the value=%d\n",sum);
}
 int mul(int x,int y)
{
 int mul;
 mul=x*y;
 return mul;
}
