#include<stdio.h>
int main()
{
 char *ptr=NULL;
 ptr=ptr+4;
 printf("ptr value=%d\n",ptr);
 ptr=ptr+1;
 printf("ptr value=%d\n",ptr);
 ptr=++ptr;
 printf("ptr inc=%d\n",ptr);
 ptr=ptr++;
 printf("ptr post inc=%d\n",ptr);
 ptr=ptr-1;
 printf("ptr minus value=%d\n",ptr);
 ptr=ptr-4;
 printf("ptr min value=%d\n",ptr);
}
 
