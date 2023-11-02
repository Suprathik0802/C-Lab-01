#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the points for 3 bowling techniques",a,b,c);
	scanf("%f %f %f",&a,&b,&c);
	if(a>=b && a>=c)
	{
		printf("raj,maximum point value is %f",a);
	}
	else if(b>=c)
	{
		printf("raj,maximum point value is %f",b);
	}
	else
	{
		printf("raj,maximum point value is %f",c);
	}
	return 0;
}
