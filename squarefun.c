#include<stdio.h>
void sq();
void sq1(int a);
int sq3();
int sq4(int a);
int a,b,x;
int main()
{
 printf("enter a value1.sq\n2.sq1\n3.sq3\n4.sq4\n5.quit\n");
 scanf("%d",&b);
 if(b==1)
 {
  sq();
 }
 if(b==2)
 {
  printf("enter a value\n");
  scanf("%d",&a);
  sq1(a);
 }
 if(b==3)
 {
  sq3();
  printf("x value=%d",x);
 }
 if(b==4)
 {
  printf("enter a value\n");
  scanf("%d",&a);
  x= sq4(a);
  printf("sq4 value=%d",x);
 }
 else if(b>4)
{
  printf("wrong selection\n");
}
}
void sq()
{
 printf("enter a value\n");
 scanf("%d",&a);
 x=a*a;
 printf("square of x is=%d",x);
}
void sq1(int a)
{
 x=a*a;
 printf("sq1 value is=%d",x);
}
int sq3()
{
 printf("enter a value\n");
 scanf("%d",&a);
 x=a*a;
 return x;
}
int sq4(int a)
{
 x=a*a;
 return x;
}
 

