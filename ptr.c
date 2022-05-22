#include<stdio.h>
int main()
{
  int a=20;
  int b=30;
  int *ptr;
  ptr=&a;
  *ptr=b+a;
 ptr=&b;
  printf("pointer value=%d\n",*ptr);
  printf("pointer address=%d\n",ptr);
  printf("a value=%d\n",a);
  printf("a address=%d\n",&a);
  printf("point and value=%d\n",&ptr);
}
