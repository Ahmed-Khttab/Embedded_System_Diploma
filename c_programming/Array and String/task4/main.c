/*
 * main.c
 *
 *  Created on: Dec 10, 2022
 *      Author: ahmed khttab
 */


#include <stdio.h>

int main()
{
	float num,average=0,sum=0;
	int i,n;
	printf("Enter the max number = ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("Enter the %d number = ",i);
		fflush(stdin);
		fflush(stdout);
		scanf("%f",&num);
		if(num<=0)
		{
			printf("you Enter the negtive number");
			break;
		}
		sum=sum+num;
	}

	average = sum/(i-1);
	printf("the average number is = %f \n",average);
	printf("the sum number is = %f \n",sum);


}
