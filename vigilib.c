#include <stdio.h>
#include <ctype.h>

#include "vigilib.h"

int checkFlags(int argc, char **argv)
{
	for(int i = 0; i < argc; i++)
	{
		if(argv[i][0] == '-')
		{
			if(argv[i][1] == 'd')
			{
				printf("D flag encountered\n");	
				return 'd';
			}
			else if(argv[i][1] == 'e')
			{
				printf("E flag encountered\n");
				return 'e';
			}
		}
	}
	return 0; //returns false if no (valid) flags are found
}

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
