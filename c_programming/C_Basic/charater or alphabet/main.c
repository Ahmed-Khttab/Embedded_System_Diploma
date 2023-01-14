/*
 * main.c
 *
 *  Created on: Dec 6, 2022
 *      Author: ahmed khttab
 */

#include <stdio.h>

int main()
{
	char var;
	printf("enter charater = ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&var);
	//--------------------------------------
	if ((var>='a' && var<='z') || (var>='A' && var<='Z') )
	{
		printf("%c is alphabet ",var);
	}
	else
	{
		printf("%c is not alphabet ",var);
	}




}

