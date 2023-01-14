/*
 * main.c
 *
 *  Created on: Dec 11, 2022
 *      Author: ahmed khttab
 */


#include <stdio.h>

int main()
{
	int i,x;
	int r,c;
	float list[100][100];
	float list2[100][100];
	int numr,numc;
	printf("enter number of row = ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&numr);
	printf("enter number of column = ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&numc);

	for(i=0;i<numr;i++)
	{
		for(x=0;x<numc;x++)
		{
			printf("enter the element of list %d-%d = ",i,x);
			fflush(stdin);
			fflush(stdout);
			scanf("%f",&list[i][x]);
		}

	}
	for(i=0;i<numr;i++)
	{
		for(x=0;x<numc;x++)
		{
			printf(" %.2f\t",list[i][x]);

		}
		printf("\n");


	}

	for(r=0;r<numc;r++)
	{
		for(c=0;c<numr;c++)
		{
			list2[r][c] = list[c][r];



		}
	}

	for(c=0;c<numc;c++)
	{
		for(r=0;r<numr;r++)
		{
			printf(" %.2f\t",list2[c][r]);

		}
		printf("\n");

	}



}
