/*
 * main.c
 *
 *  Created on: Dec 6, 2022
 *      Author: ahmed khttab
 */

#include <stdio.h>

int main()
{
	float num1,num2;
	char operation;
	printf("this is calculator for two number \n");
	printf("Enter operation (+ or - or * or /) = ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&operation);
	//*************************************
	printf("Enter first number = ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&num1);
	//*************************************
	printf("Enter second number = ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&num2);
	//----------------------------------------------------------
	switch(operation)
	{
	case '+':
	{
		printf("the sum is = %f ",num1+num2);
	}
	break;
	case '-':
	{
		printf("the sub is = %f ",num1-num2);
	}
	break;
	case '*':
	{
		printf("the mulitply is = %f ",num1*num2);
	}
	break;
	case '/':
	{
		printf("the divide is = %f ",num1/num2);
	}
	break;
	}



}
