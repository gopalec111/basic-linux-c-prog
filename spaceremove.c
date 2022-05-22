#include<stdio.h>
#include<string.h>
int main()
{
 char space[50]={"gk  ram radha   hi    "};
 int i,c,length;
 length=strlen(space);
 printf("legth of string=%d\n",length);
 for(i=0;i<=length;i++)
 {
  if(space[i]==' ')
  {
   for(c=i;c<=length;c++)
   {
    space[c]=space[c+1];
   }
    length--;
    i--;
}
}
 printf("after removing space=%s\n",space);
 printf("after removing length=%d\n",length);
}
    
