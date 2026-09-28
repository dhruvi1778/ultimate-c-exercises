#include <stdio.h>
int main ()
{
	int a,b,temp;
	printf("Enter the numbers:);
	scanf("%d %d",&a,&b);
	printf("--Before Swapping--");
	printf("a=%d b=%d",a,b\n);
	printf("--After Swapping--");
	temp=a;
	a=b;
	b=temp;
	printf("a=%d b=%d",a,b);
	return 0;
}
