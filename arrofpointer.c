#include<stdio.h>
int main()
{
 int *ptr[5];
 int i,a=10,b=1,c=20,d=21,e=2;
 ptr[0]=&a;
 ptr[1]=&b;
 ptr[2]=&c;
 ptr[3]=&d;
 ptr[4]=&e;
 printf("ptr first value=%d\n",*ptr);
 printf("ptr first add value=%d\n",ptr);
 for(i=0;i<5;i++)
 {
  printf("ptr values=%d\n",(*ptr[i]));
  printf("add of ptr values=%d\n",ptr[i]);
 }
}
 
