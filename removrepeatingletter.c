#include<stdio.h>
#include<string.h>
int main()
{
 char name[50];
 int a,b,c,i;
 printf("enter a string\n");
 gets(name);
  for(c=0;c<strlen(name);c++)
  {
   for(b=c+1;name[b]!='\0';b++)
    {
     if(name[b]==name[c])
      {
        for(a=b;name[a]!='\0';a++)
         {
          name[a]=name[a+1];
         }
       }
    }
   }
     printf("output of string is=%s\n",name);
}
   
