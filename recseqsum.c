#include<stdio.h>
int seqsum(int a);
int main()
{
 int x,n;
 printf("enter a range\n");
 scanf("%d",&n);
  x=seqsum(n);
 printf("%d",x);
}
int seqsum(int a)
{
// if(a==0) return 0;
// if(a==1) return 1;
 if(a>0) return a+seqsum(a-1);
 else return 0;
}
