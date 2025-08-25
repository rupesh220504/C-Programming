#include<stdio.h>
int greatest(int a,int b,int c)
{
	int grt;
	if(a>b && a>c)
	{
		grt=a;
		return a;
	}
	else if(b>a && b>c)
	{
		grt=b;
		return b;
	}
	else if(c>a && c>b)
	{
		grt=c;
		return c;
	}
}
main()
{
	int a,b,c,grt,a1,b1,c1;
	
	printf("Enter Three numbers \n");
	scanf("%d%d%d",&a,&b,&c);
	
	grt=greatest(a,b,c);
	
	if(grt==a)
	{
		printf("A is greatest num");
	}
	if(grt==b)
	{
		printf("B is greatest num");
	}
	if(grt==c)
	{
		printf("C is greatest num");
	}
}
