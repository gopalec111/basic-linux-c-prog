#include<stdio.h>
#include<string.h>
int main()
{
 int i,count;
 char sentance[100];
 printf("type sentence\n");
 gets(sentance);
 for(i=0;sentance[i]!='\0';i++)
 {
  if(sentance[i]==' ')
   {
    count++;
   }
  }
   printf("space count=%d",count++);
}
