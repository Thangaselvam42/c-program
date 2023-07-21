#include<stdio.h>
int main()
{
	int age,wt,tt,rh,glu,bp;
	char bg[3];
	printf("enter your age:");
	scanf("%d",&age);
	printf("enter your current weight:");
	scanf("%d",&wt);
	printf("enter rh:");
	scanf("%d",&rh);
	printf("enter tt:");
	scanf("%d",&tt);
	printf("enter glucose:");
	scanf("%d",&glu);
	printf("enter bp");
	scanf("%d",&bp);
	printf("enter bg:");
	scanf("%s",bg);
	if (age>=18)
	{
	if (wt>=55&&wt<=90)
	{
	if(tt==1)
	{
	if(rh==0)
	{
	if(glu==1)
	{
	if(bp>=80&&bp<=120)
	{
	printf("you are eligible to donate blood %s :",bg);
	}
	}
	}
	}
	}
	}     
else{
	printf("you are not eligible of blood donate %s",bg);
}
return 0;
}
         
