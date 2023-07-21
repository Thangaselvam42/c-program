#include<stdio.h>
int main()
{
	int a,j,i;
	scanf("%d",&a);
	for(i=0;i<a;i++){
		for(j=0;j<i;j++){
			if(j==0||j==i-1||j==a-1)
			printf("%d",j);
			else
			printf(" ");
		}
		printf("\n");
	}
}
