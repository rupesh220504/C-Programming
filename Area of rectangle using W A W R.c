#include<stdio.h>
float area(float l,float b)
{
	float area1;
	area1 = l * b;
	return area1;
}
main()
{
	float l,b,area1;
	printf("Enter length of rectangle\n");
	scanf("%f",&l);
	printf("Enter bridth of rectangle\n");
	scanf("%f",&b);
	
	area1 = area(l,b);
	
	printf("Area of rectangle is %f",area1);
}
