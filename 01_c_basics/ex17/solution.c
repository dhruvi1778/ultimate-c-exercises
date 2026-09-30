#include <stdio.h>
int main ()
{
    int num;
    printf("Enter the number to generate table:");
    scanf("%d",&num);
    for(int i=1;i<=10;i++)
    {
        printf("%d * %d is %d",num,i,num*i);
    }
    return 0;
}
	
