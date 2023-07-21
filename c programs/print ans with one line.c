#include<stdio.h>
int main()
{
	int a;
	scanf("%f",&a);(a>2000)?printf("you will have 20 percent discount=%d\n",(a*(20/100)))&&printf("total price %d\n",(a-(a*(20/100)))):printf("you are not eligible for this discount");
}
