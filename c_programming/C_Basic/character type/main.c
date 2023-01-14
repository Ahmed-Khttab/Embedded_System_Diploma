/*
 * main.c
 *
 *  Created on: Dec 6, 2022
 *      Author: ahmed khttab
 */

#include <stdio.h>

int main()
{
	char var;
	printf("what is alphabet you want to check \n");
	printf("enter alphabet =  ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&var);
	//**********************************************

	switch(var)
	{
	case 'a':
	case 'A':
	{
		printf("the alphabet ( %c ) is vowel",var);
	}
	break;
	case 'e':
	case 'E':
	{
		printf("the alphabet ( %c ) is vowel",var);
	}
	break;

	case 'i':
	case 'I':
	{
		printf("the alphabet ( %c ) is vowel",var);
	}
	break;

	case 'o':
	case 'O':
	{
		printf("the alphabet ( %c ) is vowel",var);
	}
	break;
	case 'u':
	case 'U':
	{
		printf("the alphabet ( %c ) is vowel",var);
	}
	break;


	default:
	{
		printf("the alphabet ( %c ) is consonant",var);
	}
	break;
	}


}

