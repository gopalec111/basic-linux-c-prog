#include<stdio.h>
void odd(int *a);
void main()
{
 int a;
 printf("enter a value\n");
 scanf("%d",&a);
 odd(&a);
 
}
void odd(int *x)
{
 int *y;
 *y=(*x)%2;
if(*y==0)
 {
  printf("it is even num");
 }
 else
 {
  printf("it is odd num");
 }
}
 

