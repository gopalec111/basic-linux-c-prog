#include<stdio.h>
int main()
{
 int g,a,b,c=0,d,e=0,f,mul;
 printf("enter a value:");
 scanf("%d",&a);
 b=a;
 while(a>0)
 {
  d=a%10;
  c=c+d;
  a=a/10;
 }
 g=c;
 while(c>0)
 {
  f=c%10;
  e=(e*10)+f;
  c=c/10;
 }
 mul=g*e;
 if(mul==b)
  printf("mul op is %d=%d then it is magic num\n",mul,b);
 else
 printf("the given num is not magical num\n");
}
  
