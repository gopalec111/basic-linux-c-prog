#include<stdio.h>
#include<string.h>
int main()
{
 int a;
 char username[]="gopal";
 char password[]="krish";
 char password1[]="krish";
 printf("enter your username\n");
 scanf("%s",username);
 printf("enter your password \n");
 scanf("%s",password);
 printf("re enter your password\n");
 scanf("%s",password1);
 a=strcmp(password,password1);
 if(a==0)
  {
    printf("hlo,gopal ur fb logined sucessfully\n");
  }
 else
  {
   printf("wrong entered password login again\n");
  }
}
