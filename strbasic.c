#include<stdio.h>
#include<string.h>
int main()
{
 int i,count;
 char str[100],h;
 printf("enter string\n");
 scanf("%s",str);
 printf("enter charactor\n");
 scanf("%c",&h);
 for(i=0;str[i]!='\0';i++)
 {
  if(str[i]==h)
  {
   count++;
  }
 }
  printf("%d",count++);
}
