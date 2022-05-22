#include<stdio.h>
#include<string.h>
int sal(int a,int b,int c);
int a,b,c;
int main()
{
 printf("welcome to softwaresolutions\n");
 int selection;
 printf("our employee names\n1.ram\n2.radha\n3.parimala\n4.gopal\n");
 scanf("%d",&selection);
 int y;
 if(selection==1)
 {
  printf("ram enter your experience\nenter your age\nenter your current salary\n");
  scanf("%d%d%d",&a,&b,&c);
  y=sal(a,b,c);
  printf("this year your increment salary is=%d\n",y);
 }
 if(selection==2)
 {
  printf("ram enter your experience\nenter your age\nenter your current salary\n");
  scanf("%d%d%d",&a,&b,&c);
  y=sal(a,b,c);
  printf("this year your increment salary is=%d\n",y);
 }
 if(selection==3)
 {
  printf("ram enter your experience\nenter your age\nenter your current salary\n");
  scanf("%d%d%d",&a,&b,&c);
  y=sal(a,b,c);
  printf("this year your increment salary is=%d\n",y);
 }
 if(selection==4)
 {
  printf("ram enter your experience\nenter your age\nenter your current salary\n");
  scanf("%d%d%d",&a,&b,&c);
  y=sal(a,b,c);
  printf("this year your increment salary is=%d\n",y);
 }
 else if(selection>=5)
  {
   printf("wrong selection\n");
   }
}
int sal(int m,int n,int o)
{
  int f;
 if(((5<=m)&&(m<=10)) && ((n>=20)&&(n<=30))  && ((3000<o)||(o>30000))) 
 { 
     printf("increment your salary 10 percent\n");
     f=(o/100*10)+o;
     printf("final salary=%d\n",f);
     return f;
  }  
 else if(((11<=m)&&(m<=50)) && ((n>=30)&&(n<=70))  && ((30000<o)||(o>90000))) 
 { 
     printf("increment your salary 20 percent\n");
     f=(o/100*20)+o;
     printf("final salary=%d\n",f);
     return f;
  }
   else
    {
     printf("input error\n");
     return 0;
    } 
}
