/*
 * main.c
 *
 *  Created on: Dec 5, 2022
 *      Author: ahmed khttab
 */


#include <stdio.h>

int main()
{
	float num1,num2;
	printf("enter two number for multip equation\n ");
	printf("enter first number = ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&num1);
	//*******************************************************
	printf("enter second number = ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&num2);
	//*******************************************************
	printf("the sum of two umber is = %f",num1*num2);
}
