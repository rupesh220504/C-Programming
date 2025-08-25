#include<stdio.h>
main()
{
	int num,f=0,s=1,t,i;
	
	printf("Enter Any Num \n");
	scanf("%d",&num);           //   5
	
	printf("%d %d",f,s);
	
	for(i=1;i<=num-2;i++)
	{
		t=f+s;
	
		printf(" %d ",t);
	
		f=s;
		s=t;
	}
	
	
	
	
}
