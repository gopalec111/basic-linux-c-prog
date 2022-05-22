#include<stdio.h>
int main()
{
int a,b,c,d;
printf("enter values\n");
scanf("%d%d",&a,&b);
printf("choose operation:1.sum,2.sub,3.mul,4.exit\n");
scanf("%d",&c);
if(c==1)
{
d=a+b;
printf("value of sum:%d\n",d);
}
if(c==2)
{
d=a-b;
printf("value of sub:%d\n",d);
}
if(c==3)
{
d=a*b;
printf("value of mul:%d\n",d);
}
}
