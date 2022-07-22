#include <stdio.h>
#include <ctype.h>

#include "vigilib.h"

char getEncChoice(void)
{
	char choice;
	while(1)
	{
		printf("Decode or encode? Type D or E: ");
		scanf("%c", &choice);

		if(isalpha(choice))
		{
			choice = tolower(choice);
			if(choice == 'd' || choice == 'e'){break;}
		}
		printf("Please enter a valid input.\n");
		char c;
		while((c = getchar()) != EOF && c != '\n'); //clear out newline
	}
	return choice;
}
