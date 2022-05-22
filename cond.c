#include<stdio.h>
int main()
{
int a,b,c,d;
printf("enter 3 values\n",a,b,c);
scanf("%d%d%d",&a,&b,&c);
d=((a<b)&&(a<c))?printf("a is small than b and c\n"):((b<c)&&(b<a))?printf("b is small than a and c\n"):((c<a)&&(c<b))?printf("c is small than a and b\n"):(a==b==c)?printf("3 num same"):printf("any 2 num same");
}
