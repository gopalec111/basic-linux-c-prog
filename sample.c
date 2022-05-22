#include<stdio.h>
#include<string.h>
int main()
{
 int a;
 char str[20];
 scanf("%d",&a);
 while((getchar ())!='\n');
 gets(str);
 printf("%d\n",a);
 printf("%s\n",str);
}
