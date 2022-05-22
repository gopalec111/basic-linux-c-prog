#include<stdio.h>
int ex(int a,int b);
int main()
{
 int x;
 int a=20;
 int b=30;
 x=ex(a,b);
 printf("%d\n",x);
}
int ex(int x,int y)
{
 x=100;
 y=200;
 printf("%d\n",x);
 return x;
}


