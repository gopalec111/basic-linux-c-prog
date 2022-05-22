#include<stdio.h>
#include<string.h>
int main()
{
 struct student{
 		char name[20];
 		int roll;
		int class;
		float marks;
		};
 struct student gopal;
 gopal.class=5;
 printf("enter a name\n");
 scanf("%s",&gopal.name);
 printf("%s\n",gopal.name);
 printf("enter roll num\n");
 scanf("%d",&gopal.roll);
 printf("%d\n",gopal.roll);
 //gopal.class=5;
 printf("class%d\n",gopal.class);
 printf("enter percentage\n");
 scanf("%f",&gopal.marks);
 printf("percentage=%f\n",gopal.marks); 
}
