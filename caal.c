#include<stdio.h>
int mul(int a,int b);
int div(int a,int b);
int c;
int main()
{
int i=1,x,y,z,m;
while(i>0)
{
printf("choose:1.mul,2.div,3.quit\n");
scanf("%d",&m);
switch(m)
{
case 1:
{
	printf("enter any values\n");
	scanf("%d%d",&x,&y);
	z=mul(x,y);
        printf("mul=%d\n",z);
        break;
}
case 2:
{
	printf("enter any values\n");
	scanf("%d%d",&x,&y);
        switch(y)
 	{
        case 0:
        {
	 printf("b is 0\n");
	 break;
	}
	 default:
	{
	 z=div(x,y);
	 printf("div=%d\n",z);
	 break;
	}
	}
break;
}
case 3:
{
	i=0;
	break;
}
default:
{
printf("wrong selection\n");
break;
}
}
}
}
int mul(int a,int b)
{
c=a*b;
return c;
}
int div(int a,int b)
{
 c=a/b;
 return c;
}
