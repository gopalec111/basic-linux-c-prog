#include<stdio.h>
int main()
{
  int i,a=1,b;
  printf("enter a value\n");
  scanf("%d",&i);
  for(b=i;b>0;b--)
  {
   a=a*b;
  }
  printf("output of a is =%d\n",a);
}
