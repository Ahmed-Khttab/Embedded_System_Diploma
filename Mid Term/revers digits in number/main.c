/*
 * main.c
 *
 *  Created on: Jan 15, 2023
 *      Author: ahmed khttab
 */

#include <stdio.h>

int main()
{
	int num;
	int x;
	printf("Enter the number = ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&num);

	//-----------loop for revers digit------------------

	printf("The revers number = ");
	while(num!=0)
	{
		x =num%10;
		num = num/10;
		printf("%d",x);

	}

}
