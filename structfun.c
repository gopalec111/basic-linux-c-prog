#include<stdio.h>
int main()
{
 struct student
 {
  int roll;
  int telugu,hindhi,english,maths,science,social;
  float percentage;
 };
  struct student gopal;
  struct student radha;
  struct student ram;
  gopal.roll=42;
  gopal.telugu=90;
  gopal.hindhi=85;
  gopal.english=98;
  gopal.maths=82;
  gopal.science=70;
  gopal.social=79;
  gopal.percentage=91.0;
  printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%f\n",gopal.roll,gopal.telugu,gopal.hindhi,gopal.english,gopal.maths,gopal.science,gopal.social,gopal.percentage);
}
