#include <stdio.h>
int main ()
{
	
	int num;
	printf("Enter the number you want to check:");
	scanf("%d",&num);
	if(num%2==0)
	{
			printf("The number is even");
	}
	else if(num==0)
	{
			printf("The number is zero");
	}
	else
	{
			printf("The number is odd");
	}
	return 0
}
