#include<stdio.h>
int main()
{
	int x,y,i,j;
	scanf("%d%d",&x,&y);
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			printf("*");
		}
		printf("\n");
	}
}
