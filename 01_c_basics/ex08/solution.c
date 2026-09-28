#include <stdio.h>
int main()
{
	char letter;
	printf("Enter a character : ");
	scanf("%c",&letter);
	printf("The ASCII value of the '%c' is : %d\n",letter,(int)letter);
	return 0;
}
