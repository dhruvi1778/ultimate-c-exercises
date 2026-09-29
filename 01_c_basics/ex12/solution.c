#include <stdio.h>
int main ()
{
	float num1,num2;
	char choice;
	printf("+.Additon\n-.Subraction\n*.Multiplication\n/.Division\n);
	printf("Enter the operation:");
	scanf("%c",&choice);
	switch(choice)
		case '+':
		printf("Enter the numbers:");
		scanf("%f %f",&num1,&num2);
		printf("%f + %f = %f\n",num1,num2,num1+num2);
		case '-':
		printf("Enter the numbers:");
		scanf("%f %f",&num1,&num2);
		printf("%f - %f = %f\n",num1,num2,num1-num2);
		case '*':
		printf("Enter the numbers:");
		scanf("%f %f",&num1,&num2);
		printf("%f * %f = %f\n",num1,num2,num1*num2);
		case '/':
		printf("Enter the numbers:");
		scanf("%f %f",&num1,&num2);
		printf("%f / %f = %f\n",num1,num2,num1/num2);
	return 0;
}
	

	
