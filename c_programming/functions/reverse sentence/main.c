/*
 * main.c
 *
 *  Created on: Jan 4, 2023
 *      Author: ahmed khttab
 */


#include <stdio.h>
#include <string.h>

void revers();

int main()
{
	char c[100];
	printf("enter sentence = ");
	fflush(stdin);
	fflush(stdout);
	gets(c);

	int y;
	y = strlen(c);
	revers(c,y);
}
void revers(char c[] , int y)
{
	char c2[100];
	c2[y]=c[y];

	for(int x =0;x<=strlen(c);x++)
	{

		if(y>=0)
		{
			y--;
			c2[y]=c[x];
		}

	}
	printf("enter the revers sentence = %s\n",c2);

}

