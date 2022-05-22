#include<stdio.h>
#include<string.h>
int main()
{
 int length,i,c;
 char rem[50];
 printf("type something!\n");
 gets(rem);
 length=strlen(rem); 
 for(i=0;i<length;i++)
 {
  if(rem[i]=='0'||rem[i]=='1'||rem[i]=='2'||rem[i]=='3'||rem[i]=='4'||rem[i]=='5'||rem[i]=='6'||rem[i]=='7'||rem[i]=='8'||rem[i]=='9')
   {
    for(c=i;c<length;c++)
    {
     rem[c]=rem[c+1];
	}
	length--;
	i--;
   }
  }
   printf("string after removing num=%s",rem);
}
  
