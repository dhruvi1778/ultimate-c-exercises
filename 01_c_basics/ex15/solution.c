#include <stdio.>
int main ()
{
	int num,sum;
	num=10;
	sum=0;
	int i=1;
	while(i<=num)
	{
		sum+=i;
		i++;
	}
	printf("The sum is %d",sum);
return 0;
}
