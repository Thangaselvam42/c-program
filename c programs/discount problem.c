#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the amount=");
	scanf("%d",&a);
	if (a>2000)
	{
	    b=(20*a)/100;
	    c=(a-b);
	    printf("total discount=%d\n",b);
	    printf("the total amount=%d\n",c);
	}
	else
	{ 
	    printf("sorry you are not get any discount");
	}
	return 0;
}
