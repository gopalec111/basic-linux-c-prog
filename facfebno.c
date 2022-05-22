#include<stdio.h>
int febo(int a);
int main()
{
 int x=0,n=20;
 while(x<n)
 {
  printf("%d ",febo(x));
  x++;
 }
}
int febo(int a)
{
 if(a==0)
 {
 return 0;
 }
 else if(a==1)
 {
 return 1;
 }
 else break;
/* else
 {
 return (febo(a-1)+febo(a-2));
 }*/
}
