/*
 * main.c
 *
 *  Created on: Dec 6, 2022
 *      Author: ahmed khttab
 */


#include <stdio.h>

int main()
{
	int num;
	printf("enter integer number you want check = ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&num);
	//-------------------------------------------------------

	if(num%2==0)
	{
		printf("the number ( %d ) is even",num);
	}
	else
	{
		printf("the number ( %d ) is odd",num);
	}
}
