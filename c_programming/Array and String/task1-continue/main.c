/*
 * main.c
 *
 *  Created on: Dec 11, 2022
 *      Author: ahmed khttab
 */


#include <stdio.h>

int main()
{
	int i;

	// *********you have three attempts******************
	for(i=0;i<4;i++)
	{


		if(i==2)
		{
			printf("the number is two \n");
			continue;
		}
		printf("%d \n",i);


	}
}
