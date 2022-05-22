#include<stdio.h>
int main()
{
 int *ptr=NULL;
 //int a=20,b=30;
 //ptr1=&a;
// ptr2=&b;
 ptr=ptr+4;
 printf("output sum of ptr1=%d\n",ptr);
 ptr=ptr+1;
 printf("output address of ptr1=%d\n",ptr);
 ptr++;
 printf("output of post inc=%d\n",ptr);
 ptr=++ptr;
 printf("output of pre inc=%d\n",ptr);
 ptr=ptr+2;
 printf("output sum of ptr=%d\n",ptr);
 ptr=ptr+3;
 printf("output address of ptr=%d\n",ptr);
 ptr=ptr--;
 printf("output of post dec=%d\n",ptr);
 ptr=--ptr;
 printf("output of pre dec=%d\n",ptr);
 ptr=ptr-4;
 printf("output of dec 4b address of ptr=%d\n",ptr);
 ptr=ptr-1;
 printf("output of dec 1b of ptr=%d\n",ptr);
}
 
 
