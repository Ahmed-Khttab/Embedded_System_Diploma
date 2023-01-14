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
	int sum=1;
	printf("enter integer number = ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&num);
    //********************************
	if(num>0)
	{
		for(var=1;var<=num;var++)
		{
			sum=sum*var;
		}
		printf("the mulitplying number is = %d ",sum);
	}
	else
	{
		printf(" **********error of this number***************");
	}

}
