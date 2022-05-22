#include<stdio.h>
#include<string.h>
int main()
{
  char ram[20];
  char radha[15];
  int i,c,one,two,a;
  printf("enter string1\n");
  gets(ram);
  printf("enter string2\n");
  gets(radha);
  for(i=0;ram[i]!='\0';i++)
  {
	//puts(ram);
	//printf("ram=%d\n",ram);
	one=one+1;
  }
//  printf("i value= %s",ram[i]);
  for(c=0;radha[c]!='\0';c++)
  {
	two=two+1;
  }
  if(one!=two)
  {
   printf("both are not same\n");
   }
	else
	{
  for(i=0;i<ram[i]!='\0' && i<radha[i]!='\0';i++)
  {
     if(ram[i]==radha[i])
     {
         a=a+1;
     }
  }
  if(one==two || one==a)
  {
  	printf("both are same\n");
  }
  else
  {
	printf("both are not same\n");
  }
 }
}      
 	
