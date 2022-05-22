#include<stdio.h>
#define n 4 
int main()
{
 int i,c;
 int arr[n];
 for(i=0;i<n;i++)
 {
  printf("enter value of c\n");
  scanf("%d",&c);
  arr[i]=c;
 }
 for(i=0;i<n;i++)
 {
  printf("c=%d\n",arr[i]);
 }
}
