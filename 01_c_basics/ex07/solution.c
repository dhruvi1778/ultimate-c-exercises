#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter the numbers:");
	scanf("%d %d",&a,&b);
	printf("---before swap---\n");
	printf("a = %d, b = %d\n",a,b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("---after swap---\n");
	printf("a = %d, b = %d\n",a,b);
	return 0;
}
