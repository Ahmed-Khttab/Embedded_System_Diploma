/*
 * main.c
 *
 *  Created on: Dec 10, 2022
 *      Author: ahmed khttab
 */


#include <stdio.h>

int main()
{
	int i,num;

	// *********you have three attempts******************
	for(i=0;i<4;i++)
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


	}
}
