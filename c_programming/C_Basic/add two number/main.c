/*
 * main.c
 *
 *  Created on: Dec 5, 2022
 *      Author: ahmed khttab
 */

#include <stdio.h>

int main()
{
	int num1,num2;
	printf("enter two number for sum equation\n ");
	printf("enter first number = ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&num1);
	//*******************************************************
	printf("enter second number = ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&num2);
	//*******************************************************
	printf("the sum of two umber is = %d",num1+num2);
}
