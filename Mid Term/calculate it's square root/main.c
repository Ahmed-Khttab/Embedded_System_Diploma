/*
 * main.c
 *
 *  Created on: Jan 16, 2023
 *      Author: ahmed khttab
 */


#include <stdio.h>

int main()
{
	float num,num1;
	printf("Enter the number = ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&num);

	while((num1*num1)<=num)
	{
		num1=num1+0.00001;
	}


	printf("the square root of %.3f is = %.3f",num,num1);
}
