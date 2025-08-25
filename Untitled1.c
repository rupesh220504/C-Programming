#include<stdio.h>
int main()
{
  int num,p,n,z;
  
  p=n=z=0;
  
  do
    {
	printf("Enter Any Number \n");
    scanf("%d",&num); 
	
	if(num>0)
	{
		p++;
	}
	else if(num<0)
	{
		n++;
	}
	else
	{
		z++;
	}
		
	}while(num!=-1);
	
   printf("Out of Loop \n");
   
   printf("Positive = %d\n",p);
   printf("Negative = %d\n",n);
   printf("Zero = %d\n",z);
}
