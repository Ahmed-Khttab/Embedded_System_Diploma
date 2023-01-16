/*
 * main.c
 *
 *  Created on: Jan 16, 2023
 *      Author: ahmed khttab
 */


#include <stdio.h>



int main() {

	int n, sum;

	//input value of n
	printf("Enter the value of n= ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &n);

	sum =0;

	//use formula to get the sum from 0 to n
	sum = n*(n+1)/2;

	//print sum
	printf("sum = %d\n", sum);

	return 0;
}

