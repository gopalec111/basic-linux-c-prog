#include<stdio.h>
void details(name);
struct student
 {
  int roll;
  int telugu,hindhi,english,maths,science,social;
  float percentage;
 };
void main()
{
  struct student radha;
  struct student gopal;
  struct student ram;
  details(gopal);
  details(radha);
  details(ram);
}
 void details(struct student name)
{
  printf("enter student roll number\n");
  scanf("%d",&name.roll);
  printf("marks in subject\n");
  scanf("%d%d%d%d%d%d",&name.telugu,&name.hindhi,&name.english,&name.maths,&name.social,&name.science);
  printf("total percentage\n");
  scanf("%f",&name.percentage);
  printf("roll no=%d\n",name.roll);
  printf("marks=%d\n%d\n%d\n%d\n%d\n%d\n",name.telugu,name.hindhi,name.english,name.maths,name.science,name.social);
  printf("per=%f\n",name.percentage);
}
  
