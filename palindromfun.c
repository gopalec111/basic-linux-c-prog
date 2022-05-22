#include<stdio.h>
int pal(int a);
int a,b,c,e;
int main()
{
 printf("enter a num\n");
 scanf("%d",&a);
 e=a;
 c=pal(a);
 if(e!=c)
 {
  printf("it is not a palindrom number=%d\n",e);
 }
 if(e==c)
 {
  printf("it is a palindrom num=%d\n",e);
 }
}
int pal(int a)
{
  while(a>0)
 {
 b=a%10;
 c=(c*10)+b;
 a=a/10;
}
return c;
}

 
