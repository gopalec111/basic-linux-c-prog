#include<stdio.h>
int sum(int a);
int sub(int a);
int b=1,e,credit,debit,balance;
int main()
{
 int a;
while(b==1)
{
 //printf("enter amount\n");
 //scanf("%d",&a);
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





 
 
 

 
