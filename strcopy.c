#include<stdio.h>
#include<string.h>
int main()
{
 int i;
 char ram[3],rad[3];
 printf("string name\n");
 gets(ram);
 for(i=0;ram[i]!='\0';i++)
 {
  rad[i]=ram[i];
 }
printf("%s",rad);
}
 
