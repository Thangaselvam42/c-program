//ramesh basic salery is input through the keyboard .his DA is 40% of bs and his hra is 20% of bs find the gross salary:
#include<stdio.h>
int main()
{
	float da,bs,hra,grs;
	printf("enter the basic salary:");
	scanf("%f",&bs);
	da=bs*0.4;
	hra=bs*0.2;
	grs=bs+da+hra;
	printf("\nbasic salary:%0.2f",bs);
	printf("\nd allowance:%0.2f",da);
	printf("\nhouse rent allowance:%0.2f",hra);
	printf("\ntotal gross salary is:%0.2f",grs);
	
}
