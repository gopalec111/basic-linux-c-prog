#include<stdio.h>
int pal(int *a);
int a,b,c,e;
int main()
{
 printf("enter a num\n");
 scanf("%d",&a);
 e=a;
 pal(&a);
 if(e!=c)
 {
  printf("it is not a palindrom number=%d\n",c);
  printf("it is reverse num\n");
 }
 if(e==c)
 {
  printf("it is a palindrom num=%d\n",c);
 }
}
int pal(int *x)
{
  while((*x)>0)
 {
 b=(*x)%10;
 c=(c*10)+b;
 *x=(*x)/10;
}
}

 
