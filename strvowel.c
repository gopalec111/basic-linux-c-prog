#include<stdio.h>
#include<string.h>
int main()
{
 char str[50],h;
 int i,c;
 printf("enter name\n");
 gets(str);
 printf("enter charactor\n");
 scanf("%c",h);
 for(i=0;str[i]!='\0';i++)
 {
  if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
  {
   c++;
  }
 }
  printf("%d",c++);
}
