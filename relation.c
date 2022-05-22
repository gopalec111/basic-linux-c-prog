#include<stdio.h>
int main()
{
int a,b,c;
printf("enter two values\n\n",a,b);
scanf("%d%d",&a,&b);
printf("a is big %d\n",c=(a>b));
printf("b is big %d\n",c=a<b);
printf("a is big and equal to b %d\n",c=a>=b);
printf("b is big and equal to a %d\n",c=a<=b);
printf("a is not equal to b %d\n",c=a!=b);
printf("a and b both are equal %d\n",c=(a==b));
}

