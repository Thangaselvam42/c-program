#include<stdio.h>
int main()
{
	float x,y;
	printf("x value=");
	scanf("%f",&x);
	printf("value=");
	scanf("%f",&y);
	if (x==0&&y==0)
	{
	printf("it is origin");
}
else if (x>0&&y>0)
{
	printf("it is first quadrent %f%f",x,y);
}
else if (x<0&&y>0)
{
	printf("it is second quadrent %f%f",x,y);
}
else if (x<0&&y<0)
{
	printf("it is thid quadrent %f%f",x,y);
}
else if (x>0&&y<0)
{
	printf("it is fourth quadrent%f%f",x,y);
}
    return 0;
}
