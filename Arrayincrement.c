#include<stdio.h>
int main(){
  
  int arr[] = {1,2,3};
  modified(arr, 3);
  
  
  for(int i=0;i<3; i++)
  {
  	printf("%d\n",arr[i]);
  }

}
void modified(int *arr,int size)
{
	for(int i=0;i<size; i++)
  {
  	arr[i]+=5;
  }
}