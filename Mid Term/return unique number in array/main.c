
/*
 * main.c
 *
 *  Created on: Jan 15, 2023
 *      Author: ahmed khttab
 */

#include <stdio.h>

int revers();

int main()
{
	int list[100];
	int num;

	printf("Enter the number of element = ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&num);

	for(int x=0;x<num;x++)
	{
		printf("Enter the element %d = ",x+1);
		fflush(stdin);
		fflush(stdout);
		scanf("%d",&list[x]);

	}
	printf("list [%d] = [",num);

	for(int x=0;x<num;x++)
	{
		printf("%d",list[x]);
		if (x<(num-1))
		{
			printf(",");
		}

	}
	printf("]");

	int i;
	i = revers(list,num);
	printf("\nthe number is = %d ",i);

}


int revers(int list[],int num)
{
	int y=0;
	for(int x=0 ;x<num ;x++)
	{
		y ^= list[x];
	}

		return y;

}


