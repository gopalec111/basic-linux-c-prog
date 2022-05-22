#include<stdio.h>
void even();
void odd(int a);
int even1();
int odd1(int a);
//int a,b,c;
void main()
{
   printf("choose:1.even\n2.odd\n3.even1\n4.odd1\n");
   scanf("%d",&c);
   switch(c)
   {
	case 1:
	{
         even();
	 break;
	}
	case 2:
	{
	 printf("enter a num\n");
	 scanf("%d",&a);
	 odd(a);
	 break;
	}
	case 3:
	{
	 b=even1();
	 printf("b op is=%d\n",b);
	}
	 break;
	case 4:
	{
	 	printf("give a number\n");
	 	scanf("%d",&a);
	 	odd1(a); 
	 	if(b==0)
	 	{
	 		printf("entered num is even\n");
	 	}
	 	else
		{
		printf("entered num is odd\n");	
		}	
	}break;
   } 
}

void  even()
{
 int a,b;
 printf("give a number\n");
 scanf("%d",&a);
 b=a%2;
 if(b==0)
 {
  printf("it's even number\n");
 }
 else
 {
  printf("it's odd number\n");
 }
}
void odd(int x)
{
 b=x%2;
 if(b==0)
 {
  printf("it's even\n");
 }
 else
 {
  printf("it's odd\n");
 }
}
int even1()
{
 //int a,b;
 printf("give a num\n");
 scanf("%d",&a);
 b=a%2;
 if(b==0)
 {
  printf("it is even\n");
 }
 else
 {
  printf("it is odd\n");
 }
 return b;
}
int odd1(int y)
{
 b=y%2;
 return b;
}
