#include<stdio.h>
float totalmarks(int p,int c,int m)
{
	int total;
	total=(p+c+m);
	return total;
}
float percentage(float total)
{
	float per;
	per=total/3;
	return per;
}
void grade(float per)
{
	if(per>80)
	{
		printf("A Grade");
	}
	if(per>60)
	{
		printf("B Grade");
	}
	if(per>40)
	{
		printf("C Grade");
	}
	else
	{
		printf("Fail");
	}
}
main()
{
	int p,c,m;
	float per;
	
	printf("Enter Physics marks \n");
	scanf("%d",&p);
	
	printf("Enter Chemistry marks \n");
	scanf("%d",&c);
	
	printf("Enter Maths marks \n");
	scanf("%d",&m);
	
	total=totalmarks(p,c,m);
	printf("Total marks is %d\n",total);
	
	per=percentage(total);
	printf("Percentage is %f\n",per);
	
	grade(per);
}
