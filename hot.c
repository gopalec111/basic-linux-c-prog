#include<stdio.h>
int main()
{
	int e,f,g,h,i=1,finalbill;
	const int idly=20,tea=5,dosa=25,vada=30;
	while(i<2)
        {
	printf("menu:1.idly=20\n2.tea=5\n3.dosa=25\n4.vada=30\n");
	scanf("%d",&e);
	printf("total quantity\n");
	scanf("%d",&f);
	if(e==1)
	{
 		g=idly*f;
	}
	if(e==2)
	{
 		g=tea*f;
	}
	if(e==3)
	{
 		g=dosa*f;
	}
	if(e==4)
	{
 		g=vada*f;
	}
	finalbill=finalbill+g;
	printf("do you want anything else\n1.yes,2.no\n");
	scanf("%d",&i);
}
printf("total bill=%d\n",finalbill);
}

