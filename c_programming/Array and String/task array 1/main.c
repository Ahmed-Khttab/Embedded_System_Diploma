/*
 * main.c
 *
 *  Created on: Dec 11, 2022
 *      Author: ahmed khttab
 */


#include <stdio.h>

int main()
{
	float list[2][2];
	float list2[2][2];
	int i,x;
	int r,c;
	printf("this calculation for two matrix\n");
	printf("***********enter the element of list***********\n");
	for(i=0;i<2;i++)
	{
		for(x=0;x<2;x++)
		{
			printf("enter the element of list %d-%d = ",i,x);
			fflush(stdin);
			fflush(stdout);
			scanf("%f",&list[i][x]);
		}

	}

	//***********
	printf("***********enter the element of list2***********\n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("enter the element of list2 %d-%d = ",r,c);
			fflush(stdin);
			fflush(stdout);
			scanf("%f",&list2[r][c]);
		}

	}
	printf(" %.1f  %.1f \n",list[0][0]+list2[0][0],list[0][1]+list2[0][1]);
	printf(" %.1f  %.1f \n",list[1][0]+list2[1][0],list[1][1]+list2[1][1]);
}
