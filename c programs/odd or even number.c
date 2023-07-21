#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int ch=(a%2==0)?1:0;
	switch(ch){
		case 0:printf("odd number");
		break;
		case 1:printf("even number");
		break;
			
	}
}
