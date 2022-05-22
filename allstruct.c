#include<stdio.h>
#include<string.h>
struct initial
	{
		char name[30],gender[8];
		char *sub[10];
		struct details
		{
			int roll,age,marks;
		}*student;
	};
struct initial class;
*student=NULL;
//struct details student={42,27,90};
int declare(struct details *student);
int result(struct initial class);
void main()
{
 //result(class);
 printf("hello\n");
// printf("%s\n%s\n%s\n",class.name,class.gender,class.(*sub));
 declare(student);
 printf("good bye\n");
// printf("%d\n%d\n%d\n",class.*(student.roll),class.*(student.age),class.*(student.marks));
}
 int result(struct initial class)
 {
  int i,j;
   printf("enter name and gender of student %d \n",i+1);
   scanf("%s%s",&class.name,&class.gender);
   printf("%s\n%s\n",class.name,class.gender);
   printf("enter subjects of student %d \n",i+1);
   for(i=0;i<2;i++)
   {
   scanf("%s",class.sub);
   printf("%s\n",class.sub);
   }
 }
 int declare(struct details *student)
 {
  scanf_s("%d",&class.student->roll);
  printf("%d\n",class.student->roll);
  //printf("%d\n%d\n%d\n",class.student->roll,class.student->age,class.student->marks);
}
 
 
		
