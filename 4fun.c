#include<stdio.h>
void sub();
void main()
{
int a,b;
sub();  
}
int a,b,c;
void sub()
{
printf("nter any 2 values\n",a,b);
scanf("%d,%d",&a,&b);
c=a-b;
printf("sub=%d",c);
}
