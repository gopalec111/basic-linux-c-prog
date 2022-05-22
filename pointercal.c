#include<stdio.h>
void sum(int *ptr1,int *ptr2,int *ptr);
void sub(int *ptr1,int *ptr2,int *ptr);
void mul(int *ptr1,int *ptr2,int *ptr);
void div(int *ptr1,int *ptr2,int *ptr);
void mdiv(int *ptr1,int *ptr2,int *ptr);
int main()
{
	int a,b,c,d,e,f,i=0,selection=0;
	while(selection<6)
	{
 		printf("choose:1.sum,2.sub.3.mul,4,div,5.mdiv,6.exit\n");
 		scanf("%d",&selection);
 		switch(selection)
		{
		case 1:
 		{
 			printf("enter values\n");
 			scanf("%d%d",&a,&b);
 			sum(&a,&b,&c);
 			printf("output of sum=%d\n",c);
 			break;
 		}
		case 2:
 		{
   			printf("enter values\n");
   			scanf("%d%d",&a,&b);
 			sub(&a,&b,&d);
 			printf("output of sub=%d\n",d);
 			break;
 		}
		case 3:
 		{
  			printf("enter values\n");
  			scanf("%d%d",&a,&b);
 			mul(&a,&b,&e);
 			printf("output of mul=%d\n",e);
 			break; 
		}
		case 4:
 		{
  			printf("enter values\n");
   			scanf("%d%d",&a,&b);
 			div(&a,&b,&f);
 			printf("output of div=%d\n",f);
 			break;
 		}
		case 5:
		{
			printf("enter values\n");
			scanf("%d%d",&a,&b);
  			mdiv(&a,&b,&c);
  			printf("output of mdiv=%d\n",c);
 			break;
 		}
		case 6:
		{
  		//	printf("good bye\n");
  			break;
 		}
		default:
		{
			printf("wrong selection\n");
		}
		}
	}
}
 void sum(int *x,int *y,int *ptr)
{
 *ptr=(*x)+(*y);
}
 void sub(int *x,int *y,int *ptr)
{
 *ptr=(*x)-(*y);
}
 void mul(int *x,int *y,int *ptr)
{
 *ptr=(*x)*(*y);
}
void div(int *x,int *y,int *ptr)
{
 *ptr=(*x)/(*y);
}
 void mdiv(int *x,int *y,int *ptr)
{
 if(*y==0)
  {
   printf("b value is 0 give another value\n");
  }
 else
 {
   *ptr=(*x)%(*y);
   printf("*ptr value=%d\n",*ptr);
  }
}

