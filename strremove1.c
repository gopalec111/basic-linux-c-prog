#include<stdio.h>
#include<string.h>
int main()
{
 int length,i,c;
 char rem[50],x;
 printf("type something!\n");
 gets(rem);
 printf("enter a letter to remove\n");
 scanf("%c",&x);
 length=strlen(rem); 
 printf("length=%d",length);
 for(i=0;i<length;i++)
 {
  if(rem[i]==x)
   {
    for(c=i;c<length;c++)
    {
     rem[c]=rem[c+1];
	}
	length--;
	i--;
   }
  }
   printf("string after removing %c=%s\n",x,rem);
	printf("%d\n",length);
}
  
