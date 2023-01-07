/*
 * main.c
 *
 *  Created on: Jan 4, 2023
 *      Author: ahmed khttab
 */

#include <stdio.h>


void powernumber(int num1 , int num2)
{
	int sum=1;
	for(int x=1;x<=num2;x++)
	{
		sum = sum*num1;
	}
	printf("enter the result number is = %d",sum);



}


int main()
{

	int num1,num2;
	printf("enter the base number = ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&num1);
	printf("enter the power number = ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&num2);
	powernumber(num1,num2);

}
