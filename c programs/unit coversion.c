//problem 2:
//Distance between two cities in km is input through the keyboard.write the program tp convert and print this
//distance in m,feet,inches and centimeters
#include<stdio.h>
int main()
{
	float km,m,feet,inches,cm;
	printf("enter the km:");
	scanf("%f",&km);
	m=km*1000;
	cm=m*100;
	inches=cm/2.54;
	feet=inches/12;
	printf("\n  meter:%0.2f",m);
	printf("\n  cm:%0.2f",cm);
	printf("\n  inches:%0.2f",inches);
	printf("\n  feet:%0.2f",feet);
	return 0;
}
