#include<stdio.h>
int main()
{
	int i,n,e,a,arr[3],b,c,result=0;
	for(i=0;i<3;i++)
	{
 		printf("given input\n");
 		scanf("%d",&a);
 		arr[i]=a;
 		//printf("array value=%d\n",arr[i]);
	}
	for(i=0;i<3;i++)
	{
 		e=arr[i];
 		while(e>0)
 		{
 			b=e%10;
 			result=(result*10)+b;
 			e=e/10;
		}
 		if(result==arr[i])
 		{
 			printf("The value arr[%d]=%d is a palimdrome \n",i,arr[i]);
 		}
 		else
 		{
 			printf("The value arr[%d]=%d is Not a Palindrone \n",i,arr[i]);
 		}
		result=0;
 	}
}
