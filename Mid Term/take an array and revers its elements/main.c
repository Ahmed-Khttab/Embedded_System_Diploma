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

	revers(list,num);


}

int revers(int list[],int num)
{
	int list2[100];
	int y=num-1;
	for(int x=0 ;x<num ;x++)
	{
		list2[y]= list[x];
		y--;
	}
	printf("\nlist revers [%d] = [",num);

	for(int x=0;x<num;x++)
	{
		printf("%d",list2[x]);
		if (x<(num-1))
		{
			printf(",");
		}

	}
	printf("]");
	return 0;

}

