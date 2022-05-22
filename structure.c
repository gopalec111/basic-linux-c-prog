#include<stdio.h>
#include<string.h>
 struct details{
 		char name[15],sub[20];
		int roll;
 		float marks[2];
		}student[2];
void main()
{
	int i,j,k;
	for(i=0;i<2;i++)
	{
	 printf("enter students name and roll no\n");
 	 scanf("%s%d",&student[i].name,&student[i].roll);
        	printf("\n");
    		for(j=0;j<2;j++)
		{
	 	 printf("enter students subject name\n");
	 	 scanf("%s",&student[i].sub[j]);
		 printf("enter marks\n");
		 scanf("%f",&student[i].marks[j]);
		}
	}
	for(i=0;i<2;i++)
 	{
	 printf("%s\n%d\n",student[i].name,student[i].roll);
	 for(j=0;j<2;j++)
	 {
	  printf("%s\n%f\n",student[i].sub[j],student[i].marks[j]);
	 }
	}
}
	
