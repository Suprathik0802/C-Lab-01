#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("enter two integers");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("addition of two integers is %d \n",c);
	d=a-b;
	printf("substraction of two integers is %d \n",d);
	e=a*b;
	printf("multiplication of two integers is %d \n",e);
	f=a/b;
	printf("division of two integers is %d \n",f);
	return 0;
}
