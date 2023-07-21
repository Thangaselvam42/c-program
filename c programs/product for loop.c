#include<stdio.h>
int main()
{
	int a,i,pro=1;
	printf("enter number:");
	scanf("%d",&a);
	for(i=1;i<a;i++){
	    pro*=i;
     }
	printf("product value: %d",pro);
}
