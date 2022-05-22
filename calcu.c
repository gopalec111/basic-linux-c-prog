#include<stdio.h>
int main()
{
int a,b,c,d;
printf("input1=\ninput2=\n",a,b);
scanf("%d%d",&a,&b);
printf("options:1.add\n2.sub\n3.mul\n4.div\n5.mdiv");
scanf("%d",&c);
if(c==1)
{
d=a+b;
printf("sum op =%d\n",d);
}
if(c==2)
{
d=a-b;
printf("sub op =%d\n",d);
}
if(c==3)
{
d=a*b;
printf("mul op =%d\n",d);
}
if(c==4)
{
if(b==0)
{
 printf("invalid ip");
}
else
{
d=a/b;
printf("div op =%d\n",d);
}
}
if(c==5)
{
if(b==0)
{
 printf("invalid ip");
}
else
{
d=a%b;
printf("mdiv op=%d\n",d);
}
}
}
