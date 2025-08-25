#include<stdio.h>
void swap(int *x,int *y,int *z,int *w)
{
	int e;
	
	e=*y;
	*y=*x;
	*x=*w;
	*w=*z;
	*z=e;
}
main()
{
	int a,b,c,d;
	a=10;
	b=20;
	c=30;
	d=40;
	
	swap(&a,&b,&c,&d);
	
	printf("Value of A is %d\n",a);
	printf("Value of B is %d\n",b);
	printf("Value of C is %d\n",c);
	printf("Value of D is %d\n",d);
}
