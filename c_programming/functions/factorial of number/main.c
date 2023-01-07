/*
 * main.c
 *
 *  Created on: Jan 4, 2023
 *      Author: ahmed khttab
 */

#include <stdio.h>


void factorial(int num1)
{
	int sum =1;
	for(int x = 1;x<=num1;x++)
	{
		sum = sum*x;
	}
	printf("the factorial of number is = %d",sum);

}

int main()
{
	int num1;
	printf("enter the number = ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&num1);
	factorial(num1);
}


