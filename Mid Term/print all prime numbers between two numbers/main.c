/*
 * main.c
 *
 *  Created on: Jan 15, 2023
 *      Author: ahmed khttab
 */

#include <stdio.h>

int main()
{
	int num1,num2;
	printf("Enter the first number = ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&num1);

	printf("Enter the second number = ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&num2);
	printf("The prime number is =");

	for(int x=0;x<=num2;x++)
	{
		if((num1+x) == 2)
		{
			printf("%d ",num1+x);
		}
		else if((num1+x) == 5)
		{
			printf("%d ",num1+x);
		}
		else if((num1+x) == 3)
		{
			printf("%d ",num1+x);
		}
		else if((num1+x)%2 == 0)
		{

		}
		else if((num1+x)%3 == 0)
		{

		}
		else if((num1+x)%5 == 0)
		{

		}
		else
		{
			printf("%d ",num1+x);
		}

	}
}
