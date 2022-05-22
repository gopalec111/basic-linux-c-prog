#include<stdio.h>
int strlen(char len[20]);
int strcpy(char cpy[30],char cpy1[30]);
int strcat(char cat[25],char cat1[25]);
void strcmp(char cmp[50],char cmp1[50]);
int a,b,d,c;
int main()
{
//while(1)
//{
   char len[20],cpy[30],cpy1[30],cat[30],cat1[30];
   char cmp[50],cmp1[50],str1[30],str2[30];
  // printf("eneter string value\n");
  // gets(len);
//   a=strlen(len);
  // b=strcpy(cpy,cpy1);
   //c=strcat(cat,cat1);
   printf("enter strings for cmp\n\n");
   gets(cmp);
   gets(cmp1);
   strcmp(cmp,cmp1);
  // printf("output of string length=%s\n%d\n",len,a);
  // printf("output of string copy=%s\n%s\n",cpy,cpy1);
  // printf("output of string cat=%s\n%s\n",cat,cat1);
   //printf("output of string compare=%s\n%s\n",cmp,cmp1);
//}
}
 int strlen(char x[])
 {
  int i;
  for(i=0;x[i]!='\0';i++)
  {
   }
    return i;
  }
 int strcpy(char u[],char v[])
{
 int i;
 printf("enter strings for copy \n");
 gets(u);
 gets(v);
 for(i=0;u[i]!='\0';i++)
 {
  v[i]=u[i];
 }
  return v[i];
}
 int strcat(char y[],char z[])
{
 int i,l;
 printf("enter stings for cat\n");
 gets(y);
 gets(z);
 for(i=0;y[i]!='\0';i++)
 {
  l++;
 }
 for(i=0;z[i]!='\0';i++)
 {
  y[l]=z[i];
  l++;
 }
 return y[l];
}
 void strcmp(char e[50],char f[50])
 {
  int i;
 // printf("enter strings for cmp\n\n");
 // gets(e);
 // gets(f);
  for(i=0;e[i]==f[i];i++)
  {
   if(e[i]=='\0'&&f[i]=='\0')
   {
    printf("both are same\n");
	return;
   }

   }
    printf("both are not same\n");
    printf("output of the string=%s\n%s\n",e,f);
 }
   
