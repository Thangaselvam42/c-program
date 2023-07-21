#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d;
	float x1,x2;
	printf("center the value of a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	d=b*b-4*a*c;
	if(d==0){
		printf("all roots are equal");
		x1=b/(2.0*a);
		x2=x1;
		printf("x=%f\n",x1);
		printf("y=%f\n",x2);
	}
	else if(d>0){
		print("both roots are real and different\n");
		x1=(-b+sqrt(d))/(2*a);
		x2=(-b-sqrt(d))/(2*a);
		printf("x=%f\n",x1);
		print("y=%f\n",x2);
		
	}
	return 0;
}
