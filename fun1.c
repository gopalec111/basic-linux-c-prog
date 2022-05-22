#include<stdio.h>
int add(int a,int b);
int a,b,c;
int main()
{
 int x,y,c;
 c= add(x,y);
 printf("add=%d\n",c);
}
 int add(int a,int b)
{
 c=a+b;
 return c;
}
