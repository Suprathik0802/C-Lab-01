#include<stdio.h>
int main()
{
	float x,y,z;
	printf("enter the two numbers");
	scanf("%f %f",&x,&y);
	z=x;
	x=y;
	y=z;
	printf("numbers are %f %f",x,y);
	return 0;
}
