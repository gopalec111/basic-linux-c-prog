#include<stdio.h>
int add(int a,int b);
int or(int a,int b);
int ritshift(int a,int b);
int leftshift(int a,int b);
int onescom(int a,int b);
int xor(int a,int b);
int a,b,c;	
int main()
{
 printf("enter values of a and b\n");
 scanf("%d%d",&a,&b);
 c=a&b;
 printf("output of c=%d\n",c);
}
