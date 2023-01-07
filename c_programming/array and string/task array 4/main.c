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
	int location,elemnt,num,x;
	printf("enter number of number = ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&num);

	for(x=1;x<=num;x++)
	{
		list[x]=x;
		printf("%d  ",list[x]);
	}
	printf("\nenter insert number = ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&elemnt);
	printf("enter location of number = ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&location);



	for(x=1;x<=num;x++)
	{
		if(x==location)
		{
			printf("%d ",elemnt);
		}
		list[x]=x;
		printf("%d ",list[x]);
	}








}
