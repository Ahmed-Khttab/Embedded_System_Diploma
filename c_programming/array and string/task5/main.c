/*
 * main.c
 *
 *  Created on: Dec 11, 2022
 *      Author: ahmed khttab
 */


#include <stdio.h>

int main()
{
	int product=1,num,x;

	for(x=1;x<=4;x++)
	{
		printf("enter %d the number ",x);
		fflush(stdin);
		fflush(stdout);
		scanf("%d",&num);
		if(num==0)
		{
			continue;
		}
		product=product*num;
	}
	printf("the product is = %d ",product);

}
