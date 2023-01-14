/*
 * main.c
 *
 *  Created on: Jan 4, 2023
 *      Author: ahmed khttab
 */

#include <stdio.h>


void primenum(int num1 , int num2)
{
	while(num1<=num2)
	{
		if(num1%2 !=0)
			{
				printf("the prime number is = %d\n ",num1);
			}
		num1++;
	}

}


int main()
{

	int num1,num2;
	printf("enter the first number = ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&num1);
	printf("enter the second number = ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&num2);
	primenum(num1,num2);

}



