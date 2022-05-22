#include<stdio.h>
int main()
{
 int i,a,l=0;
 char name[30],rev[30];
 printf("enter a string\n");
 gets(name);
 for(i=0;name[i]!='\0';i++)
 {
  l++;
 }
 a=l-1;
for(i=0;i<l;i++)
{
 rev[i]=name[a];
 a--;
}
 printf("rev name=%s\n",rev);
}

