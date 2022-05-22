#include<stdio.h>
int prime(int *a);
int a,b,c,e,d;
int main()
{
 printf("enter a value\n");
 scanf("%d",&a);
 prime(&a);
 if(c==2)
 {
  printf("it is a prime number\n");
 }
 else
 {
  printf("given num not prime number\n");
 }
}
int prime(int *x)
{
 for(b=1;b<=(*x);b++)
{
 d=(*x)%b;
 if(d==0)
  {
   c++;
  }
} 
}
 

