#include<stdio.h>
#include<math.h>
int main()
{
	float p,t,r,s,c;
	printf("enter the principle amount \n",p);
	scanf("%f",&p);
	printf("enter the time span \n",t);
	scanf("%f",&t);
	printf("enter the rate of interest \n",r);
	scanf("%f",&r);
	s=p*t*r/100;
	c=p*pow((1+(r/100)),t)-p;
	printf("simple interest is %f \n",s);
	printf("compound interest annually is %f \n",c);
	return 0;
}
