#include<stdio.h>
int main()
{
 int arr[5];
 int(*p)[5]=NULL;
 p=arr;
 int i;
 for(i=0;i<5;i++)
 {
  scanf("%d",p[i]);
 }
 for(i=0;i<5;i++)
 {
  printf("array values=%d\n",*p[i]);
  printf("array add of p=%d\n",p[i]);
 }
 printf("start add of p=%d\n",p);
}

 
 
