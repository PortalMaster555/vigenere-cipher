#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#include "vigilib.h"

int main(int argc, char **argv)
{
	char choice = getEncChoice();
	(choice == 'd') ? printf("d\n") : printf("e\n");
	return 0;
}
