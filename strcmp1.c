#include<stdio.h>
#include<string.h>
int main()
{
 char str1[50];
 char str2[50];
 int i;
 printf("enter string1\n");
 gets(str1);
 printf("enter string2\n");
 gets(str2);
 for(i=0;str1[i]==str2[i];i++)
 {
  if(str1[i]=='\0')
  {
   printf("both are same\n");
   return 0;
  }  
 }
   printf("both are not same\n");
}
