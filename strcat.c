#include<stdio.h>
#include<string.h>
int main()
{
  char gk[20],gs[10];
  int length,i,c;
  printf("enter string1\n");
  gets(gk);
  printf("enter string2\n");
  gets(gs);
  for(i=0;gk[i]!='\0';i++)
   {
    length++;
   }
   gk[length]=' ';
   for(c=0;gs[c]!='\0';c++)
    {
     gk[length+1]=gs[c];
	length++;
    }
     printf("output=%s\n",gk);
}

