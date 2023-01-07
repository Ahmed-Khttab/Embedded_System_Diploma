/*
 * main.c
 *
 *  Created on: Dec 10, 2022
 *      Author: ahmed khttab
 */


#include <stdio.h>

int main()
{
	int i=0,num;
	while(i<4)
	{
		printf("enter the number ");
		fflush(stdin);
		fflush(stdout);
		scanf("%d",&num);
		if(num==1250)
		{
			printf(" the num is right \n ");
			break;
		}
		else
		{
			printf(" the num is fault \n ");
		}
		i++;
	}
}
