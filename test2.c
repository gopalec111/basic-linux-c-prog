#include<stdio.h>
int main()
{
 int c,arr[4],n,i,a,b;
 for(n=0;n<4;n++)
 {
  printf("enter values\n");
  scanf("%d",&i);
  arr[n]=i;
 }
  for(n=0;n<4;n++)
 {
  printf("arr[%d]=%d\n",n,arr[n]);
   c=arr[n];
  while(c>0)
  {
   a=c%10;
   b=b*10+a;
   c=c/10;
  }
  printf("reverse=%d\n",b);
  if(b==arr[n])
  {
   printf("it is palindrome num\n");
  }
  else
  {
   printf("it is not pali num\n");
  }
  b=0;
 }
}
