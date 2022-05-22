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
  name.roll=42;
  name.telugu=90;
  name.hindhi=85;
  name.english=98;
  name.maths=82;
  name.science=70;
  name.social=79;
  name.percentage=91.0;
  printf("roll=%d\n",name.roll);
  printf("telugu=%d\nhindhi=%d\nenglish=%d\nmaths=%d\nscience=%d\nsocial=%d\n",name.telugu,name.hindhi,name.english,name.maths,name.science,name.social);
  printf("per=%f\n",name.percentage);
}
