#include<stdio.h>
int main()
{
	float p,q;
	printf("enter the two values");
	scanf("%f %f",&p,&q);
	p=p*q;/*p=p+q*/
	q=p/q;/*q=p-q*/
	p=p/q;/*p=p-q*/
	printf("the numbers are %f %f",p,q);
	return 0;
}
