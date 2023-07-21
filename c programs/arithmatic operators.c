#include<stdio.h>
int main()
{
	int a,b,c;
	float d;
	printf("enter first number:");
	scanf("%d",&a);
	printf("enter second value:");
	scanf("%d",&b);
	c=a+b;
	printf("\nsum of numbers:%d",c);
	c=a-b;
	printf("\ndifference of numbers %d",c);
	c=a*b;
	printf("\nmultiplication of values: %d",c);
	d=(float)a/(float)b;
	printf("\ndivision of values: %0.2f",d);
	c=a%b;
	printf("\nreminder value: %d",c);
	
	
	
}
