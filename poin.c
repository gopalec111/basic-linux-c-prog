#include<stdio.h>
int main()
{
 int arr[5]={10,20,30,40,50};
 int *ptr=arr;
 ptr=&arr;
 //printf("%p\n",ptr);
 ptr=++ptr;
 printf("ptr value=%d\n",ptr); 
 *(++ptr);
 printf("pre inc ptr=%d\n",ptr);
 ptr=ptr+4;
 printf("ptr add=%d\n",ptr);
 ++(*ptr);
 printf("pre inc star value=%d\n",ptr);
 *(ptr++);
 printf("star value post inc=%d\n",ptr);
 (*ptr)++;
 printf("star value out post inc=%d\n",ptr);
 return 0;
 }
