/*
 * main.c
 *
 *  Created on: Dec 6, 2022
 *      Author: ahmed khttab
 */


#include <stdio.h>

int main()
{
	float num1,num2,num3;
	printf("enter three number to calcutar max number \n");
	printf("enter first number = ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&num1);
	//*****************************************
	printf("enter scond number = ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&num2);
	//*****************************************
	printf("enter third number = ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&num3);
	//*****************************************

	if(num1>num2 && num1>num3 )
	{
		printf("the 1max number is = %f",num1);

	}
	else if(num2>num1 && num2>num3)
	{

		printf("the 2max number is = %f",num2);

	}
	else if(num3>num1 && num3>num2)
	{

		printf("the 3max number is = %f",num3);
	}
	else
	{

		printf("this is error");
	}


}
