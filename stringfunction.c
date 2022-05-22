#include<stdio.h>
int length(char x[]);
void copy(char x[],char y[]);
void concat(char x[],char y[]);
int cmp(char x[],char y[]);
int i,z;
int main()
{
 int a,b,c;
 char str[50],str1[50];
 while(z<1)
 {
  printf("choose the option:\n1-length 2-copy 3-cat 4-compare 5-quit\n");
  scanf("%d",&a);
  switch(a)
  {
   case 1:
   {
    printf("Write string str:\n");
    gets(str);
    b=length(str);
    printf("length of given string=%d\n",b);
    break;
   }
   case 2:
   {
    printf("Write string str:\n");
    scanf("%s",&str);
    printf("Write string str1:\n");
    scanf("%s",&str1);
    copy(str,str1);
    break;
   }
   case 3:
   {
    printf("Write string str:\n");
    scanf("%s",&str);
    printf("Write string str1:\n");
    scanf("%s",&str1);
    concat(str,str1);
    break;
   }
   case 4:
   {
    int len=0,len1=0;
    printf("Write string str:\n");
    scanf("%s",&str);
    printf("Write string str1:\n");
    scanf("%s",&str1);
    for(i=0;str[i]!='\0';i++)
    {
     len=len+1;
    }
    for(i=0;str1[i]!='\0';i++)
    {
     len1=len1+1;
    }
    b=cmp(str,str1);
    if(len==len1&&b==len)
    {
     printf("both strings are same\n");
    }
    else
    {
     printf("both strings are not same\n");
    }
   }
   break;
   case 5:
   {
    z=1;
    break;
   }
   default:
   {
    printf("wrong selection\n");
    break;
   }
  }
 }
}
int length(char str[])
{
 int count=0;
 for(i=0;str[i]!='\0';i++);
 {
  
 }
 return i;
}
void copy(char x[50],char y[50])
{
 for(i=0;x[i]!='\0';i++)
 {
  x[i]=y[i];
 }
 printf("str after copied:%s\n",x);
}
void concat(char x[],char y[])
{
 int a=0,b;
 for(i=0;x[i]!='\0';i++)
 {
  a++;
 }
 x[a]=' ';
 for(b=0;y[b]!='\0';b++)
 {
  x[a+1]=y[b];
  a++;
 }
 printf("after concat str:%s\n",x);
}
int cmp(char str[],char str1[])
{
 for(i=0;str[i]!='\0';i++)
 {
  if(str[i]==str1[i])
  {

  }
 }
 return i;
}
