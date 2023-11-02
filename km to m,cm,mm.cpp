#include<stdio.h>
int main()
{
	float km,m,cm,mm;
	printf("enter the value in kilometer",km);
	scanf("%f",&km);
	m=km/1000;
	cm=km/100000;
	mm=km/1000000;
	printf("value in meter is %f \n",m);
	printf("value in centimeter is %f \n",cm);
	printf("value in millimeter is %f \n",mm);
	return 0;
}
