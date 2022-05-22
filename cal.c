#include <stdio.h>
int main()
{
int a,b;
printf("enter 1st num\n");
scanf("%d",&a);
printf("enter 2 nd num\n");
scanf("%d",&b);
int c;
printf("enter ur choice\n1.add\n2.sub\n3.div\n4.mul\n5.mdiv\n");
scanf("%d",&c);
int d;
if(c==1)
{
d=a+b;
printf("add:%d\n",d);
}
else if(c==2)
{
d=a-b;
printf("sub:%d\n",d);
}
else if(c==3)
{
d=a/b;
printf("div:%d\n",d);
}
else if(c==4)
{
d=a*b;
printf("mul:%d\n",d);
}
else if(c==5)
{
d=a%b;
printf("mdiv:%d\n",d);
}
}
