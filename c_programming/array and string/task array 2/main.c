/*
 * main.c
 *
 *  Created on: Dec 11, 2022
 *      Author: ahmed khttab
 */


#include <stdio.h>

int main()
{
	int i,n;
	float sum=0,av;
	float list[50];
	printf("calcutor the average \n");
	printf("enter the number of data = ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("enter %d number = ",i+1);
		fflush(stdin);
		fflush(stdout);
		scanf("%f",&list[i]);
		sum+=list[i];
	}
	 av = sum/i;
	 printf("the average is equal = %.2f",av);


}
