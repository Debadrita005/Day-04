#include<stdio.h>
int main()
{
	float num;
	printf("enter a number");
	scanf("%f",&num);
	if(num==(int)num)
	{
		printf("The number is a whole number \n");
	}
	else
	{
		printf("The number is not a whole number \n");
	}
	return 0;
}
