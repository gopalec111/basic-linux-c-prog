#include<stdio.h>
#include<math.h>
int main()
{
 int c,a,b,i=0,e=0,count=0;
 printf("enter a num\n");
 scanf("%d",&a);
 b=a;
 c=a;
 while(a>0)
 {
  a=a/10;
  count++;
 }
 //printf("count=%d",count);
 while(b>0)
 {
  e=b%10;
  i=i+pow(e,count);
  b=b/10;
 }
 if(c==i)
 printf("the given numb=%d isi=%d armstrong num\n",c,i);
 else
 printf("the given num=%d isi=%d not armstrong num\n",c,i);
}
  
 
