#include<stdio.h>
int main()
{
	float a,b,c,d,e,f;
	printf("enter the marks of 5 subjects");
	scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
	f=(a+b+c+d+e)/5;
	printf("the percentage of student is %f %%",f);
	return 0;
}
