#include <stdio.h>
int main ()
{
	float n,p,r,interest;
	printf("Enter the principle amount:");
	scanf("%f",&p);
	printf("Enter the rate of interest:");
	scanf("%f",&r);
	printf("Enter the no. of years:");
	scanf("%f",&n);
	interest=(n*p*r)/100;
	printf("The simple interest is %.3f",interest);
	return 0;
}

