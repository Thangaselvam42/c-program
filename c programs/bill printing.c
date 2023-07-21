#include<stdio.h>
int main()
{
	int bill,gst,product;
	printf("product price=");
	scanf("%d",&product);
	gst=(2.5*product)/100;
	bill=gst+product;
	printf("total gst=%d\n",gst);
	//dfdff
	printf("total bill=%d\n",bill);
}
