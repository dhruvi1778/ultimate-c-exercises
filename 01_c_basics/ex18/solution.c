#include <stdio.h>
int main ()
{
	int num;
	printf("----Menu----");
	do
	{
		printf("1.Greet\n2.Goodbye\n3.Exit\n\n");
		scanf("%d",&num);
		
		switch(num)
		{
			case 1:
				printf("Hello! Welcome to the program..");
				break;
			case 2:
				printf("Goodbye! Have a nice day..");
				break;
			case 3:
				printf("Exiting the program..");
				break;
			default:
				printf("Invalid Option");
		}
	}
	while(num!=3)
	return 0;
}

		
