/*
 * main.c
 *
 *  Created on: Dec 14, 2022
 *      Author: ahmed khttab
 */


#include <stdio.h>


int main()
{
	char list[100];
	char c;
	int x ;
	printf("enter string = ");
	fflush(stdin);
	fflush(stdout);
	gets(list);
	printf("enter character = ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&c);
	for(x=0;list[x] !=c ;x++)
	{


	}
	printf("the location %c is = %d",c,x+1);

}
