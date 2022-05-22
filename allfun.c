#include<stdio.h>
int add(int a,int b);
int sub(int a,int b);
int a,b,c;
int main()
{
 c=add(a,b);
 printf("add=%d",c);
 c=sub(a,b);
 printf("sub=%d",c);
}
int add(int x,int y)
{
 printf("enter values\n");
 scanf("%d%d",&x,&y);
 c=x+y;
 return c;
}
int sub(int a,int b)
{
 printf("enter values\n");
 scanf("%d%d",&a,&b);
 c=a-b;
 return c;
}
 
