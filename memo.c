#include<stdio.h>
#include<stdlib.h>
int main()
{
 int *ptr=NULL;
 int i;
 ptr=(int*)malloc(5*sizeof(int));
 if(ptr==NULL)
 {
  printf("memory not created\n");
 }
 else
 {
  for(i=0;i<5;i++)
  {
   scanf("%d",ptr+i);
  }
  for(i=0;i<5;i++)
  {
   printf("malloc=%d\n",*(ptr+i));
  }
 }
 ptr=realloc(ptr,10*sizeof(int));
 printf("enter values for re alloc\n");
 for(i=5;i<10;i++)
 {
  scanf("%d",ptr+i);
 }
 for(i=0;i<10;i++)
 {
  printf("realloc values=%d\n",*(ptr+i));
 }
 free(ptr);
 ptr=NULL;
 printf("ptr after null values=%d\n",ptr);
 int n;
 printf("calloc arr size\n");
 scanf("%d",&n);
 ptr=calloc(n,sizeof(int));
 for(i=0;i<n;i++)
 {
  scanf("%d",ptr+i);
 }
 for(i=0;i<n;i++)
 {
  printf("calloc values=%d\n",*(ptr+i));
 }
}
 
