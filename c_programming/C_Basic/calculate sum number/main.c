/*
 * main.c
 *
 *  Created on: Dec 6, 2022
 *      Author: ahmed khttab
 */


#include <stdio.h>

int main()
{
	int num,var;
	int sum=0;
	printf("enter integer number = ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&num);
    //************************************
	for(var=0;var<=num;var++)
	{
		sum=sum+var;
	}
	printf("the sum number is = %d ",sum);
}
