#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#include "vigilib.h"

int main(int argc, char **argv)
{
	char choice;

	int isFlagDriven = checkFlags(argc, argv);

	if(!isFlagDriven) //if flag is present/valid
	{
		choice = getEncChoice();
		(choice == 'd') ? printf("Decoding input\n") : printf("Encoding input\n");
	}
	return 0;
}
