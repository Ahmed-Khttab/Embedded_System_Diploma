/*
 * main.c
 *
 *  Created on: Dec 6, 2022
 *      Author: ahmed khttab
 */

#include <stdio.h>

int main()
{
	float num;
	printf("enter number = ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&num);
	//*****************************************


     if(num>0)
     {
    	 printf("the number ( %f ) is postive",num);
     }
     else if(num<0)
     {
    	 printf("the number ( %f ) is negtive",num);
     }
     else
     {
    	 printf("the number ( %f ) is zero",num);
     }
}
