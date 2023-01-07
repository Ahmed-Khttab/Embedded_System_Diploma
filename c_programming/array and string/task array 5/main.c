/*
 * main.c
 *
 *  Created on: Dec 13, 2022
 *      Author: ahmed khttab
 */


#include <stdio.h>

int main()
{
	int list[50];
	int elemnt,num,x;
	printf("enter number of number = ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&num);

	for(x=1;x<=num;x++)
	{
		list[x]=x*11;
		printf("%d  ",list[x]);
	}
	printf("\nenter element number = ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&elemnt);
	x=1;
	while(x<num && elemnt != list[x])
	{
		x++;
	}
	printf("the location is = %d",x);

}
