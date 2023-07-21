#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	while(x%10==0){
		x/=10;
	}
	printf("%d",x);
}
