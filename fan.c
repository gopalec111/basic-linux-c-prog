#include<stdio.h>
int add(int a,int b);
int sub(int a,int b);
int d;
int main()
{
 for(int a,b,c,d,i=4;(3<i);i++)
 {
  printf("choose:1.add\n2.sub\n3.quit\n");
  scanf("%d",&c);
  switch(c)
  {
   case 1:
   {
    printf("select any 2 values:\n");
    scanf("%d%d",&a,&b);
    d=add(a,b);
    break;
   }
   case 2:
   {
    printf("select any 2 values:\n");
    scanf("%d%d",&a,&b);
    d=sub(a,b);
    break;
   }
   case 3:
   {
   i=0;
   break;
   }
   default:
   {
    printf("wrong selection\n");
    break;
   }
  }
 }
}  
   int add(int a,int b)
   {
    d=a+b;
    printf("add=%d\n",d);
    return d;   
   }
   int sub(int a,int b)
   {
    d=a-b;
    printf("sub=%d\n",d);
    return d;
   }

