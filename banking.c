#include<stdio.h>
#include<string.h>
int sum(int a);
int sub(int a);
int a,b=1,e,credit,debit,balance;
int main()
{
 int acc1,pw,pw1=54321,pw2=9876;
 printf("welcome\nenter your account number\n");
 scanf("%d",&acc1);
 if(acc1==12345)
 {
  printf("ram enter your password\n");
  scanf("%d",&pw);
  if(pw==pw1)
  {
   while(b<2)
   {
    printf("choose:1.credit\n2.debit\n3.checkbalance\n");
    scanf("%d",&e);
    if(e==1)
    {
     printf("enter amount\n");
     scanf("%d",&a);
     balance=sum(a);
     printf("balance=%d\n",balance);
    }
    if(e==2)
    {
     printf("enter amount\n");
     scanf("%d",&a);
     balance=sub(a);
     printf("balance=%d\n",balance);
    }
    if(e==3)
    {
     printf("balance=%d\n",balance);
    }
    printf("do you want another transaction 1.yes 2.no\n");
    scanf("%d",&b);
   }
  }
  else
  {
   printf("password wrong entered\n");
  }
 }
 if(acc1==6789)
 {
  printf("radha enter your password\n");
  scanf("%d",&pw);
  if(pw==pw2)
  {
   while(b<2)
   {
    printf("choose:1.credit\n2.debit\n3.checkbalance\n");
    scanf("%d",&e);
    if(e==1)
    {
     printf("enter amount\n");
     scanf("%d",&a);
     balance=sum(a);
     printf("balance=%d\n",balance);
    }
    if(e==2)
    {
     printf("enter amount\n");
     scanf("%d",&a);
     balance=sub(a);
     printf("balance=%d\n",balance);
    }
    if(e==3)
    {
     printf("balance=%d\n",balance);
    }
    printf("do you want another transaction 1.yes 2.no");
    scanf("%d",&b);
   }
  }
  else
  {
   printf("pw wrong entered\n");
  }
 }
 else if(acc1!=12345&&acc1!=6789)
 {
  printf("wrongly entered acc num\n");
 }
}
int sum(int x)
{
 balance=x+balance;
 return balance;
}
int sub(int y)
{
 debit=balance-y;
 return debit;
}





 
 
 

 
